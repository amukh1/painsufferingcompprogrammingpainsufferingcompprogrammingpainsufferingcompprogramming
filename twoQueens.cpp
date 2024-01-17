#include "bits/stdc++.h"

bool canStrike(std::tuple<int,int>, std::tuple<int,int>);
int queens(int n);

int main() {
    int n;
    std::cin >> n;

    std::cout << queens(n) << std::endl;
}

int queens(int n) {
    int count = 0;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            for(int k = 0; k<n; k++) {
                for(int l = 0; l<n; l++) {
                    if(!canStrike({i,j}, {k,l})) count++;
                }
            }
        }
    }
    return count/2;
}

bool canStrike(std::tuple<int,int> A, std::tuple<int,int> B) {
    if(std::get<0>(A) == std::get<0>(B) || std::get<1>(A) == std::get<1>(B)) {
        return true;
    } else if(std::abs(std::get<0>(A) - std::get<0>(B)) == std::abs(std::get<1>(A) - std::get<1>(B))) {
        return true;
    } else
    return false;
}