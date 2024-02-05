#include "bits/stdc++.h"

int main() {
    int x[7];

    for(int i = 0; i<7; i++) {
        std::cin >> x[i];
    }

    std::sort(x, x+7);
    std::cout << x[0] << " " << x[1] << " " << x[6] - x[0] - x[1] << std::endl;
}