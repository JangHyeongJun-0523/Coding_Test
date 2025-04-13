#include <iostream>
#include <iomanip>

int summation (int A, int B) {
    return A + B;
}

int subtraction (int A, int B) {
    return A - B;
}

int multiplication (int A, int B) {
    return A * B;
}

int division (int A, int B) {
    return A / B;
}

int remainder (int A, int B) {
    return A % B;
}

int main () {
    int A, B;
    std::cin >> A >> B;
    std::cout << summation(A, B) << std::endl;
    std::cout << subtraction(A, B) << std::endl;
    std::cout << multiplication(A, B) << std::endl;
    std::cout << division(A, B) << std::endl;
    std::cout << remainder(A,B) << std::endl;
    
    return 0;
}