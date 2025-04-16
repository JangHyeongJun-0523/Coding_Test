#include <iostream>

void PrintSumCases() {
    int first_num = 0, second_num = 0;
    while (std::cin >> first_num >> second_num) {
        std::cout << first_num + second_num << '\n';
    }
}

int main() {
    PrintSumCases();

    return 0;
}