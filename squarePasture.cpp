#include "bits/stdc++.h"

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    std::cin >> x3 >> y3 >> x4 >> y4;

    std::tuple<int, int> t1 = std::make_tuple(std::min(x1, x3), std::min(y1, y3));
    std::tuple<int, int> t2 = std::make_tuple(std::max(x2, x4), std::max(y2, y4));

    int max = std::max(std::get<0>(t2) - std::get<0>(t1), std::get<1>(t2) - std::get<1>(t1));
    std::cout << max*max << std::endl;
}