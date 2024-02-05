#include "bits/stdc++.h"

int main() {
    int k;
    std::cin >> k;
    std::vector<int> results;
    for(int j = 0; j<k; j++) {
    int n, c0, c1, h;
    std::cin >> n >> c0 >> c1 >> h;

    std::string s;
    std::cin >> s;

    int s1 = 0;
    int s0 = 0;

    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '0') {
            s0++;
        }else {
            s1++;
        }
    }

    int cost = 0;

    if(c0 < c1) {
        if(c0 + h < c1) {
            cost = c0 * s0 + (c0 + h) * s1;
        }else {
            cost = c0 * s0 + c1 * s1;
        }
    }else {
        if(c1 + h < c0) {
            cost = c1 * s1 + (c1 + h) * s0;
        }else {
            cost = c0 * s0 + c1 * s1;
        }
    }
    results.push_back(cost);
    }

    for(int i = 0; i<results.size(); i++) {
        std::cout << results[i] << std::endl;
    }
}