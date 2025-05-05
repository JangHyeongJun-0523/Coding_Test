#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string N;
    std::cin >> N;
    int digits[static_cast<int>(N.size())];
    for (int i = 0; i < static_cast<int>(N.size()); ++i) {
        digits[i] = int(N[i]) - 48;
    }
    std::sort(digits, digits + static_cast<int>(N.size()), std::greater<int>());
    for (int i = 0; i < static_cast<int>(N.size()); ++i) {
        std::cout << digits[i];
    }
    return 0;
}