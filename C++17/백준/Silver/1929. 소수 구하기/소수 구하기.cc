#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int M, N;
    std::cin >> M >> N;
    std::vector<bool> is_prime(N + 1, true);
    is_prime[0] = false; is_prime[1] = false;
    for (int i = 2; i * i <= N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = M; i <= N; ++i) {
        if (is_prime[i] == true) {
            std::cout << i << '\n';
        }
    }
}