#include <iostream>

void PrintSumCases() {
    int first_num = 0, second_num = 0;
    while (true) {
        std::cin >> first_num >> second_num;
        if (first_num == 0 && second_num == 0) {
            break;
        }
        std::cout << first_num + second_num << '\n';
    }
}

int main() {
    PrintSumCases();

    return 0;
}