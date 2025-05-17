#include <iostream>
#include <string>


int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        int upper_case = 0, lower_case = 0, number = 0, space = 0;
        for (char ch : line) {
            if ('a' <= ch && ch <= 'z') ++lower_case;
            else if ('A' <= ch && ch <= 'Z') ++upper_case;
            else if ('0' <= ch && ch <= '9') ++number;
            else if (ch == ' ') ++space;
        }
        std::cout << lower_case << ' ' << upper_case << ' '
                    << number << ' ' << space << '\n';
    }
    return 0;
}