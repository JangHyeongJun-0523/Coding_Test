#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int A, B, r, GCD, mul;
        std::cin >> A >> B;
        mul = A * B;
        r = A % B;
        while (r != 0) {
            A = B;
            B = r;
            r = A % B;
        }
        GCD = B;
        std::cout << mul / GCD << '\n';
    }
    return 0;
}