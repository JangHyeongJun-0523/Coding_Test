#include <iostream>

int main() {
    int first_num = 1, second_num = 1;
    while (first_num != 0 || second_num != 0) {
        std::cin >> first_num >> second_num;
        if (first_num == 0 || second_num == 0) break;
        if (second_num % first_num == 0) std::cout << "factor" << std::endl;
        else if (first_num % second_num == 0) std::cout << "multiple" << std::endl;
        else std::cout << "neither" << std::endl;
    }
    return 0;
}