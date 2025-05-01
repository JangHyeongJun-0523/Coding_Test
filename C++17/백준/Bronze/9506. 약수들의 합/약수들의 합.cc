#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    while(n != -1) {
        int summation = 0;
        std::vector<int> divisors;
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                divisors.push_back(i);
                summation += i;
            }
        }
        if (summation == n) {
            std::cout << n << " = ";
            for (int j = 0; j < static_cast<int>(divisors.size()); ++j) {
                std::cout << divisors[j];
                if (j != static_cast<int>(divisors.size()) - 1) std::cout << " + ";
            }
            std::cout << '\n';
        } else {
            std::cout << n << " is NOT perfect.\n";
        }
        std::cin >> n;
    }
    return 0;
}