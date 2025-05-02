#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> rectangle;
    //input three points.
    for (int i = 0; i < 3; ++i) {
        int x, y;
        std::vector<int> coordinate;
        std::cin >> x >> y;
        coordinate.push_back(x);
        coordinate.push_back(y);
        rectangle.push_back(coordinate);
    }
    //algorithm: compare three points and find a solo point.
    std::pair<int, int> solo_point;
    //rectangle[point index][0:x, 1:y]
    if (rectangle[0][0] == rectangle[1][0]) {
        solo_point.first = rectangle[2][0];
    } else{//rectangle[0][0] != rectangle [1][0]
        if (rectangle[1][0] == rectangle[2][0]) {
            solo_point.first = rectangle[0][0];
        } else {//rectangle[1][0] != rectangle[2][0]
            solo_point.first = rectangle[1][0];
        }
    }
    if (rectangle[0][1] == rectangle[1][1]) {
        solo_point.second = rectangle[2][1];
    } else{//rectangle[0][1] != rectangle [1][1]
        if (rectangle[1][1] == rectangle[2][1]) {
            solo_point.second = rectangle[0][1];
        } else {//rectangle[1][1] != rectangle[2][1]
            solo_point.second = rectangle[1][1];
        }
    }
    std::cout << solo_point.first << ' ' << solo_point.second << std::endl;
    return 0;
}