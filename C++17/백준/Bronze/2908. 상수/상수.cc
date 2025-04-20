#include <iostream>
#include <string>
#include <algorithm>


std::pair<int, int> inputTwoNumbers() {
    std::string first_number, second_number;
    std::cin >> first_number >> second_number;

    std::reverse(first_number.begin(), first_number.end());
    std::reverse(second_number.begin(), second_number.end());

    return {std::stoi(first_number), std::stoi(second_number)};
}


int main() {
    std::pair<int, int> two_numbers = inputTwoNumbers();
    int first_number = two_numbers.first;
    int second_number = two_numbers.second;
    std::cout << std::max(first_number, second_number);

    return 0;
}