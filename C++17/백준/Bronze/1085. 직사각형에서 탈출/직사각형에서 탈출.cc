#include <iostream>
#include <algorithm>

int main() {
    int x, y, w, h, min_x, min_y, min_distance;
    std::cin >> x >> y >> w >> h;
    min_x = std::min(x, w - x);
    min_y = std::min(y, h - y);
    min_distance = std::min(min_x, min_y);
    std::cout << min_distance << std::endl;
    return 0;
}