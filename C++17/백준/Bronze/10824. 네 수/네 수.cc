#include <iostream>
#include <string>


int main() {
    std::string A, B, C, D, AB, CD;
    std::cin >> A >> B >> C >> D;
    AB = A + B; CD = C + D;
    long long result = std::stoll(AB) + std::stoll(CD);
    std::cout << result;
    return 0;
}