#include <iostream>

int GetQuadrant(int x , int y) {
    if (x > 0 && y > 0) {
        return 1;
    }
    else if (x < 0 && y > 0) {
        return 2;
    }
    else if (x < 0 && y < 0) {
        return 3;
    }
    else {
        return 4;
    }
}

int main() {
    int x = 0, y = 0;
    std::cin >> x >> y;
    std::cout << GetQuadrant(x, y) << std::endl;

    return 0;
}