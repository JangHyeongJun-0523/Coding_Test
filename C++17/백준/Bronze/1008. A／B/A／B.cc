#include <iostream>
#include <iomanip>

double division (double A, double B) {
    return A / B;
}

int main () {
    double A, B;
    std::cin >> A >> B;
    std::cout << std::fixed << std::setprecision(15) << division(A, B) << std::endl;
    return 0;
}