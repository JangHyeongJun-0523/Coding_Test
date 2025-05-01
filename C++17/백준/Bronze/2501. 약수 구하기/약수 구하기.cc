#include <iostream>
#include <vector>

int main() {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> divisors;
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) divisors.push_back(i);
    }
    if (K > static_cast<int>(divisors.size())) std::cout << 0 <<std::endl;
    else std::cout << divisors[K - 1] <<std::endl;
    return 0;
}