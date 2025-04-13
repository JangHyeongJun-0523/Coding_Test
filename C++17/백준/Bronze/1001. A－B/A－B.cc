#include <iostream>

int subtraction (int A, int B) {
    return A - B;
}

int main () {
    int A, B;
    std::cin >> A >> B;
    std::cout << subtraction(A, B) << std::endl;
    return 0;
}