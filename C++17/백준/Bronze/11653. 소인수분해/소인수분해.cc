#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for(int i = 2; i * i <= N; ++i) {
        while (N % i == 0) {
            std::cout << i << '\n';
            N /= i;
        }
    }
    if (N > 1) std::cout << N << '\n';
    return 0;
}