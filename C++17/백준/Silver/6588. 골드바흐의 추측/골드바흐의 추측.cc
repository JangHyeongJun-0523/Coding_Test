#include <iostream>
#include <bitset>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    const int MAX = 10000000;
    std::bitset<MAX + 1> is_prime;
    is_prime.set();
    is_prime[0] = false; is_prime[1] = false;
    for(int i = 2; i * i <= MAX; ++i) {
        if(is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
    int n;
    while(std::cin >> n && n != 0) {
        bool found = false;
        for (int i = 3; i <= n/2; i += 2) {
            if (is_prime[i] && is_prime[n - i]) {
                std::cout << n << " = " << i << " + " << n - i << '\n';
                found = true;
                break;
            }
        }
        if (!found) {
                std::cout << "Goldbach's conjecture is wrong.\n";
        }
    }

    return 0;
}