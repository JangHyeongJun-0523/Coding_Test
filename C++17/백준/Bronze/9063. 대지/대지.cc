#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    if (n > 1) {
        int min_x, min_y, max_x, max_y;
        std::vector<std::vector<int>> points;
        //input points informations
        for (int i = 0; i < n; ++i) {
            int x, y;
            std::vector<int> coordinate;
            std::cin >> x >> y;
            coordinate.push_back(x);
            coordinate.push_back(y);
            points.push_back(coordinate);
        }
        //initialize parameters
        min_x = max_x = points[0][0];
        min_y = max_y = points[0][1];
        //find the minimum and maximum point in each axis
        for (const std::vector<int>& coordinate : points) {
            min_x = std::min(coordinate[0], min_x);
            max_x = std::max(coordinate[0], max_x);
            min_y = std::min(coordinate[1], min_y);
            max_y = std::max(coordinate[1], max_y);
        }
        if (min_x == max_x || min_y == max_y) std::cout << 0 << std::endl;
        else std::cout << (max_x - min_x) * (max_y - min_y) << std::endl;
    } else std::cout << 0 <<std::endl;
    return 0;
}