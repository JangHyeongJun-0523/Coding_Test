#include <iostream>
#include <string>

std::string getInputNumbers() {
    int text_size = 0;
    std::cin >> text_size;
    std::string input_numbers;
    std::cin >> input_numbers;
    return input_numbers;
}

int sumWithSrting(const std::string& input_numbers) {
    int summation = 0;
    for (int num_char : input_numbers) {
        summation += num_char - '0';
    }
    return summation;
}

int main() {
    std::string input_numbers = getInputNumbers();
    int summaition = sumWithSrting(input_numbers);
    std::cout << summaition;

    return 0;
}