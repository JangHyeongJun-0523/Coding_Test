#include <iostream>
#include <string>


int main() {
    std::string binary, octal;
    std::cin >> binary;
    int cnt = 0, digit = 0;
    for (int i = static_cast<int>(binary.size()) - 1; i >= 0; --i) {
        if (cnt != 3) {
            if (cnt == 0) digit += 1 * (int)(binary[i] - '0');
            else if (cnt == 1) digit += 2 * (int)(binary[i] - '0');
            else digit += 4 * (int)(binary[i] - '0');
            ++cnt;
            if (cnt == 3) {
                octal.push_back((char)(digit + '0'));
                digit = 0;
                cnt = 0;
            } else if (i == 0 && cnt < 3) {
                octal.push_back((char)(digit + '0'));
            }
        } 
    }
    for (int i = static_cast<int>(octal.size()) - 1; i >= 0; --i) {
        std::cout << octal[i];
    }
    return 0;
}