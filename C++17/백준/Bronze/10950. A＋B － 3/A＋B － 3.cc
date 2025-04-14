#include <iostream>

void Summation(int num_of_test_case) {
    for (int i = 0; i < num_of_test_case; ++i) {
        int first_number = 0, second_number = 0;
        std::cin >> first_number >> second_number;
        std::cout << first_number + second_number << std::endl;
    }
}

int main() {
    int num_of_test_case = 0;
    std::cin >> num_of_test_case;
    Summation(num_of_test_case);

    return 0;
}