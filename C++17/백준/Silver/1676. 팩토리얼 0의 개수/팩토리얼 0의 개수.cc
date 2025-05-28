#include <iostream>

int main() {
    int N, power_of_5 = 5, result = 0;
    std::cin >> N;
    while (N / power_of_5 > 0) {
        result += N / power_of_5;
        power_of_5 *= 5;
    }
    std::cout << result;
}