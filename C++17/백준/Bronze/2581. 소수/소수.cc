#include <iostream>

bool IsPrime(const int& number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    bool min_exist = false;
    int M, N, min = 0, sum = 0;
    std::cin >> M >> N;
    for (int number = M; number <= N; ++number) {
        if (IsPrime(number)) {
            sum += number;
            if (min_exist != true) {
                min = number;
                min_exist = true;
            }
        }
    }
    if (min_exist != true) std::cout << -1;
    else std::cout << sum << '\n' << min;
    return 0;
}