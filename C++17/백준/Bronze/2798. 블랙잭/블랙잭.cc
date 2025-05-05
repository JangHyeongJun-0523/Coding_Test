#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int cards[N];
    //input cards
    for (int i = 0; i < N; ++i) {
        std::cin >> cards[i];
    }
    //check all combinations
    int maximum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int summation = cards[i] + cards[j] + cards[k];
                if (summation <= M) maximum = std::max(maximum, summation);
            }
        }
    }
    std::cout << maximum << std::endl;
    return 0;
}