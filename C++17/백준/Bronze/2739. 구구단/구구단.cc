#include <iostream>

void PrintMultiplicationTable(int N) {
    for (int i = 1; i < 10; ++i) {
        std::cout << N << " * " << i << " = " << N * i << std::endl;
    }
}

int main() {
    int N = 0;
    std::cin >> N;
    PrintMultiplicationTable(N);

    return 0;
}