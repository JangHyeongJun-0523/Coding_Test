#include <iostream>

int main() {
    int angle_1, angle_2, angle_3;
    std::cin >> angle_1 >> angle_2 >> angle_3;
    if (angle_1 + angle_2 + angle_3 == 180) {
        if (angle_1 != angle_2 && angle_2 != angle_3 && angle_3 != angle_1) std::cout << "Scalene" << std::endl;
        else if (angle_1 == angle_2 && angle_2 == angle_3 && angle_3 == angle_1) std::cout << "Equilateral" << std::endl;
        else std::cout << "Isosceles" << std::endl;
    } else std::cout << "Error" << std::endl;
    return 0;
}