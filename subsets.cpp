#include "bits/stdc++.h"

using namespace std;

vector<vector<int>> subsets;
vector<int> subset = {};

void subs(int n, int k) {
    if(k == n+1) {
        subsets.push_back(subset);
    } else {
        subset.push_back(k);
        subs(n, k+1);
        subset.pop_back();
        subs(n, k+1);

    }
}

int main() {
    int n;
    cin >> n;
    subs(n, 1);

    for(auto sub : subsets) {
        cout << "{ ";
        for(auto element : sub) {
            cout << element << " ";
        }
        cout << "}";
        cout << endl;
    }
}