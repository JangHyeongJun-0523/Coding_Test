#include <iostream>

int SummationFromOneToN(int n) {
    int summation = 0;
    for (int i = 1; i <= n; ++i) {
        summation += i;
    }

    return summation;
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << SummationFromOneToN(n) << std::endl;
    
    return 0;
}