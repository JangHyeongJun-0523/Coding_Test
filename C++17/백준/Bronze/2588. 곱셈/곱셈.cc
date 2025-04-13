#include <iostream>

int main() {
    int first_number, second_number, first_digit, second_digit, third_digit;
    std::cin >> first_number >> second_number;

    first_digit = second_number / 100;
    second_digit = (second_number % 100) / 10;
    third_digit = second_number % 10;

    std::cout << first_number * third_digit << std::endl;
    std::cout << first_number * second_digit << std::endl;
    std::cout << first_number * first_digit << std::endl;
    std::cout << first_number * second_number << std::endl;
    
    return 0;
}