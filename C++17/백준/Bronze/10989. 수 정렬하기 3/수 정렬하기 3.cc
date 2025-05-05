#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;

    const int MAX = 10001;
    int count[MAX] = {0};

    int num;
    for(int i = 0; i < N; ++i) {
        std::cin >> num;
        ++count[num];
    }

    for (int i = 1; i < MAX; ++i) {
        while (count[i]--) {
            std::cout << i << '\n';
        }
    }

    return 0;
}