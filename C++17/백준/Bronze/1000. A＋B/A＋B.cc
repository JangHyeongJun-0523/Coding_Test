#include <iostream>

int summation (int _A , int _B) {
    return _A + _B;
}

int main () {
    int A, B;
    std::cin >> A >> B;
    std::cout << summation(A, B) << std::endl;
    return 0;
}