#include <iostream>

void PrintSumCases(int number_of_test_cases) {
    for (int i = 1; i <= number_of_test_cases; ++i) {
        int first_number = 0, second_number = 0;
        std::cin >> first_number >> second_number;
        std::cout << "Case #" << i << ": " 
                  << first_number << " + " << second_number 
                  << " = " << first_number + second_number << std::endl;
    }
}


int main() {
    int number_of_test_cases = 0;
    std::cin >> number_of_test_cases;
    PrintSumCases(number_of_test_cases);

    return 0;
}