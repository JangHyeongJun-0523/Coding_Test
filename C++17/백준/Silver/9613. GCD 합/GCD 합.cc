#include <iostream>
#include <vector>


int gcd(int a, int b) {
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<int> numbers(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            std::cin >> numbers[i];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                sum += gcd(numbers[i], numbers[j]);
            }
        }
        std::cout << sum << '\n';
    }
    return 0;
}