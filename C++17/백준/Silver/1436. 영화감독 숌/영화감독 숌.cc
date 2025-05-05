#include <iostream>

int main() {
    int N, counter = 0;
    std::cin >> N;
    for (int title = 666; ; ++title) {
        if (std::to_string(title).find("666") != -1) {
            ++counter;
            if (counter == N) {
                std::cout << title << std::endl;
                return 0;
            }
        }
    }
    return 0;
}