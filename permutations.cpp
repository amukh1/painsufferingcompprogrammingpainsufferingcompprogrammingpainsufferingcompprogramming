#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> permutation;
    for(int i = 1; i <= n; i++) {
        permutation.push_back(i);
    }
    do {
        for(auto element : permutation) {
            cout << element << " ";
        }
        cout << endl;
    } while(next_permutation(permutation.begin(), permutation.end()));
}