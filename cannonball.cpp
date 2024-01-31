#include "bits/stdc++.h"

struct Polong {
    long power;
    std::string type;
};

int main() {
    long N;
    std::cin >> N;

    long S;
    std::cin >> S;

    std::vector<Polong> polongs = {};

    for(long i = 0; i<N; i++) {
        long t, v;
        std::cin >> t;
        std::cin >> v;
        Polong p = {v, t == 1 ? "target" : "pad"};
        polongs.push_back(p);
    }

    long direction = 1;
    long power = 1;
    long targets = 0;
    S--;

    while (S <= N && S >= 0) {
        // std::cout << "type: " << polongs[S].type << " power: " << polongs[S].power << std::endl;
        if(polongs[S].type == "pad") {
            power+=polongs[S].power;
            direction = -direction;
        }else if(polongs[S].type == "target" && power >= polongs[S].power) {
            polongs[S].type = "hit";
            polongs[S].power = 0;
            targets++;
        }
        S += direction * power;
    }

    std::cout << targets << std::endl;
}