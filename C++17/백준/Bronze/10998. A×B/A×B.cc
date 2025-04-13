#include <iostream>

int multiplication (int A, int B) {
    return A * B;
}

int main () {
    int A, B;
    std::cin >> A >> B;
    std::cout << multiplication(A, B) << std::endl;
    return 0;
}