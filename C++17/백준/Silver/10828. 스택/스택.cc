#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie();
    std::cout.tie();

    int N;
    std::cin >> N;
    std::vector<int> stack;
    for (int i = 0; i < N; ++i) {
        std::string command;
        std::cin >> command;
        if (command == "push") {
            int number;
            std::cin >> number;
            stack.push_back(number);
        } else if (command == "pop") {
            if (stack.empty()) {
                std::cout << -1 << '\n';
            } else {std::cout << stack.back() << '\n';
            stack.pop_back();
            }
        } else if (command == "size") {
            std::cout << stack.size() << '\n';
        } else if (command == "empty") {
            std::cout << ((stack.empty()) ? 1 : 0) << '\n';
        } else if (command == "top") {
            if (stack.empty()) {
                std::cout << -1 << '\n';
            } else std::cout << stack.back() << '\n';
        }
    }

    return 0;
}