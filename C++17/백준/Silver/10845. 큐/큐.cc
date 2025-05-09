#include <iostream>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;
    std::queue<int> queue;

    while (N--) {
        std::string cmd;
        std::cin >> cmd;

        if (cmd == "push") {
            int X;
            std::cin >> X;
            queue.push(X);
        } else if (cmd == "pop") {
            if (queue.empty()) {
                std::cout << -1 << '\n';
            } else {
                std::cout << queue.front() << '\n';
                queue.pop();
            }
        } else if (cmd == "size") {
            std::cout << queue.size() << '\n';
        } else if (cmd == "empty") {
            std::cout << queue.empty() << '\n';
        } else if (cmd == "front") {
            if (queue.empty()) std::cout << -1 << '\n';
            else std::cout << queue.front() << '\n';
        } else if (cmd == "back") {
            if (queue.empty()) std::cout << -1 << '\n';
            else std::cout << queue.back() << '\n';
        }
    }
    return 0;
}