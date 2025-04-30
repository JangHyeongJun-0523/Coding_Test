#include <iostream>

int main() {
    int A, B, V;
    std::cin >> A >> B >> V;
    int days = (V - A + (A - B - 1)) / (A - B) + 1;
    std::cout << days <<std::endl;
    return 0;
}