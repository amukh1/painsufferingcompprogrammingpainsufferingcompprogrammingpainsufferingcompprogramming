#include "bits/stdc++.h"

int main() {
    int n;

    std::cin >> n;

    std::vector<std::vector<int>> sols = {};

    for(int i = 0; i<n; i++) {
        int k;
        std::cin >> k;

        std::vector<int> v = {};

        for(int j = 0; j<k; j++) {
            int x;
            std::cin >> x;
            v.push_back(x);
        }

        std::vector<int> nums = {};
        for(int j = 0; j<k; j++) {
            if(std::find(nums.begin(), nums.end(), v[j]) == nums.end()) {
                nums.push_back(v[j]);
            }
        }
        
        std::vector<int> m = {};

        for(int j = 0; j<nums.size(); j++) {
            for(int a = 0; a<v.size(); a++) {
                for(int b = a; b<v.size(); b++) {
                    // check if majority is v[j]
                    int count = 0;
                    for(int c = a; c<=b; c++) {
                        if(v[c] == nums[j]) count++;
                    }
                    if(count > ((b-a)+1)/2 && std::find(m.begin(), m.end(), nums[j]) == m.end() && (b-a) >= 2){
                        m.push_back(nums[j]);
                    }
            }
        }
        }

        if(m.size() > 0) {
        sols.push_back(m);
        }else sols.push_back({-1});
    }

    for(int i = 0; i<sols.size(); i++) {
        for(int j = 0; j<sols[i].size()-1; j++) {
            std::cout << sols[i][j] << " ";
        }
        std::cout << sols[i][sols[i].size()-1];
        std::cout << std::endl;
    }
}