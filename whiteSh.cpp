#include "bits/stdc++.h"

bool pointIsIn(int x, int y, int x_1, int y_1, int x_2, int y_2) {
    return (x_1 < x && x < x_2 && y_1 < y && y < y_2);
}

int main() {
    int x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4, x_5, y_5, x_6, y_6;

    std::cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3 >> x_4 >> y_4 >> x_5 >> y_5 >> x_6 >> y_6;

    int coords_2[4][2];
    int coords_3[4][2];

    coords_2[0][0] = x_3;
    coords_2[0][1] = y_3;

    coords_2[1][0] = x_4;
    coords_2[1][1] = y_3;

    coords_2[2][0] = x_3;
    coords_2[2][1] = y_4;

    coords_2[3][0] = x_4;
    coords_2[3][1] = y_4;

    //

    coords_3[0][0] = x_3;
    coords_2[0][1] = y_3;

    coords_3[1][0] = x_4;
    coords_2[1][1] = y_3;

    coords_3[2][0] = x_3;
    coords_2[2][1] = y_4;

    coords_3[3][0] = x_4;
    coords_3[3][1] = y_4;

    bool c2_in_1 = false;
    bool c3_in_1 = false;

    for(int i = 0; i<4; i++) {
        if(pointIsIn(coords_2[i][0], coords_2[i][0], x_1, y_1, x_2, y_2)) {
            c2_in_1 = true;
        }
    }

    for(int i = 0; i<4; i++) {
        if(pointIsIn(coords_3[i][0], coords_3[i][0], x_1, y_1, x_2, y_2)) {
            c3_in_1 = true;
        }
    }

    if(c2_in_1 || c3_in_1) std::cout << "NO" << std::endl; else {
        
    }
}