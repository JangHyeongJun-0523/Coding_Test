#include <iostream>

int main() {
    int N, three = 0, bags = -1;
    std::cin >> N;
    for (int five = N / 5; five >= 0; --five) {
        if ((N - (5 * five)) % 3 == 0) {
            three = (N - (5 * five)) / 3;
            bags = five + three;
            break;
        }
    }
    std::cout << bags << std::endl;
    return 0;
}