#include <iostream>

int main() {
    int a, b, c, max; //lines of triangle: a, b, c
    std::cin >> a >> b >> c;
    while (!(a == 0 && b == 0 && c == 0)) {
        max = std::max(a, std::max(b, c));
        if (max == a && max != b && max != c) {
            if (a >= b + c) std::cout << "Invalid\n";
            else {
                if (b == c) std::cout << "Isosceles\n";
                else std::cout << "Scalene\n";
            }
        } else if (max == b && max != c && max != a) {
            if (b >= c + a) std::cout << "Invalid\n";
            else {
                if (c == a) std::cout << "Isosceles\n";
                else std::cout << "Scalene\n";
            }
        } else if (max == c && max != a && max != b) {
            if (c >= a + b) std::cout << "Invalid\n";
            else {
                if (a == b) std::cout << "Isosceles\n";
                else std::cout << "Scalene\n";
            }
        } else {
            if (a == b && b == c && c ==a) std::cout << "Equilateral\n";
            else std::cout << "Isosceles\n";
        }
        std::cin >> a >> b >> c;
    }
    return 0;
}