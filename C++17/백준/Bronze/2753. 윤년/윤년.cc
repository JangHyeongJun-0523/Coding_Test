#include <iostream>

int LeapYearChecker(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int year = 0;
    std::cin >> year;
    std::cout << LeapYearChecker(year) << std::endl;
    return 0;
}