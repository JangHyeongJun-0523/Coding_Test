#include <iostream>

int main() {
    int X, diagonal_num = 1, numerator, denominator;
    std::cin >> X;
    while(X > (1 + diagonal_num) *  diagonal_num / 2) {
        ++diagonal_num;
    }
    int shift_num = X - ((1 + (diagonal_num - 1)) * (diagonal_num - 1) / 2);
    if (diagonal_num % 2 == 0) {
        numerator = 1, denominator = diagonal_num;
        for (int i = 1; i < shift_num; ++i) {
            ++numerator;
            --denominator;
        }
    } else { // X % 2 != 0
        numerator = diagonal_num, denominator = 1;
        for (int i = 1; i < shift_num; ++i) {
            --numerator;
            ++denominator;
        }
    }
    std::cout << numerator <<'/'<< denominator << std::endl;
    return 0;
}