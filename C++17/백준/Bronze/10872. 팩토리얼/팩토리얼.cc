#include <iostream>


int main() {
    int N, result = 1;
    std::cin >> N;

    if (N == 0) {
        std::cout << result;
    } else {
        for (int i = N; i > 0; --i) {
            result *= i;
        }
        std::cout << result;
    }
    return 0;
}