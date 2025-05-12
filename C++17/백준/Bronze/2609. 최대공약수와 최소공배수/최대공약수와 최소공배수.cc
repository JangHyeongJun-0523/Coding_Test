#include <iostream>

int main() {
    int num1, num2, max_divisor, min_multiple;
    std::cin >> num1 >> num2;

    max_divisor = std::min(num1, num2);
    min_multiple = std::max(num1, num2);

    while (!(num1 % max_divisor == 0 && num2 % max_divisor == 0)) {
        --max_divisor;
    }

    while (!(min_multiple % num1 == 0 && min_multiple % num2 == 0)) {
        ++min_multiple;
    }

    std::cout << max_divisor << '\n' << min_multiple;

    return 0;
}