#include <iostream>
#include <string>

int main() {
    std::string octal;
    std::cin >> octal;

    for (int i = 0; i < static_cast<int>(octal.size()); ++i) {
        int number = octal[i] - '0';
        std::string binary = "";
        
        for (int divider = 4; divider >= 1; divider /= 2) {
            if (number / divider != 0) {
                binary += '1';
                number %= divider;
            } else {
                binary += '0';
            }
        }

        if (i == 0) {
            int pos = binary.find('1');
            if (pos != std::string::npos) {
                std::cout << binary.substr(pos);
            } else {
                std::cout << "0";
            }
        } else {
            std::cout << binary;
        }
    }

    std::cout << std::endl;
    return 0;
}