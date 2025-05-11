#include <iostream>
#include <queue>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, K;
    std::cin >> N >> K;
    std::queue<int> series;

    for (int i = 1; i <= N; ++i) {
        series.push(i);
    }

    std::cout << '<';

    for (int i = 0; i < N; ++i) {
        int iterations = K;
        while (iterations--) {
            if (iterations == 0) {
                std::cout << series.front();
                series.pop();
            } else {
                series.push(series.front());
                series.pop();
            }
        }
        if (i != N - 1) std::cout << ", ";
        else std::cout << '>';
    }

    return 0;
}