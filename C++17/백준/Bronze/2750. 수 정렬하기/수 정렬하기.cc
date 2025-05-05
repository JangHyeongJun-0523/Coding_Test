#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int numbers[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }
    for (int i = N - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (numbers[j] > numbers[j+1]) {
                std::swap(numbers[j], numbers[j+1]);
            }
        }
    }
    for (int number : numbers) {
        std::cout << number << std::endl;
    }
    return 0;
}