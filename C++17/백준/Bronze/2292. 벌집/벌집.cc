#include <iostream>

int main() {
    int N, passed_rooms = 1;
    std::cin >> N;
    while (N > 1 + 3 * (passed_rooms - 1) * passed_rooms) {
        ++passed_rooms;
    }
    std::cout << passed_rooms << std::endl;
    return 0;
}