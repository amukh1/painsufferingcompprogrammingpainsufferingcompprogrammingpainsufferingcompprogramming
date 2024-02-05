#include "bits/stdc++.h"

using namespace std;

bool isarockx(int x, vector<vector<int>> Rocks) {
    for(int i = 0; i<Rocks.size(); i++) {
        if(Rocks[i][0] == x) {
            return true;
        }
    }
    return false;
}

bool isarocky(int y, vector<vector<int>> Rocks) {
    for(int i = 0; i<Rocks.size(); i++) {
        if(Rocks[i][1] == y) {
            return true;
        }
    }
    return false;
}

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    vector<vector<char>> rows;

    vector<int> Lake;
    vector<int> Barn;

    vector<vector<int>> Rocks;

    for(int i = 0; i<10; i++) {
        vector<char> row;
        for(int j = 0; j<10; j++) {
            char c;
            cin >> c;
            row.push_back(c);
            if(c == 'L') {
                Lake = {j, i};
            }else if(c == 'B') {
                Barn = {j, i};
            }else if(c == 'R') {
                Rocks.push_back({j, i});
            }
        }
        rows.push_back(row);
    }

    int cows = abs(Barn[0] - Lake[0]) + abs(Barn[1] - Lake[1]);
    if(((Barn[0] == Lake[0]) && isarockx(Barn[0], Rocks)) || ((Barn[1] == Lake[1]) && isarocky(Barn[1], Rocks))) {
        cows++;
        return 0;
    }
    cout << cows - 1 << endl;

    // log coordates 
    // cout << "(" << Lake[0] << ", " << Lake[1] << ")" << endl;
    // cout << "(" << Barn[0] << ", " << Barn[1] << ")" << endl;
}