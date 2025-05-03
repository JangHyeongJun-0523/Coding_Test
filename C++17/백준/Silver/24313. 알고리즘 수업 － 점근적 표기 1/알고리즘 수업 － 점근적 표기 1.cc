#include <iostream>

int main() {
    int a1, a0, c, n0;
    std::cin >> a1 >> a0 >> c >> n0;
    for (int n = n0; n < 101; ++n) {
        if (((a1 - c) * n + a0) > 0) {
            std::cout << 0;
            break;
        } else if (n == 100) std::cout << 1;
    }
    return 0;
}