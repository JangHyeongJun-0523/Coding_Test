#include <iostream>
#include <deque>
#include <string>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    std::deque<int> deque;

    while (N--) {
        std::string cmd;
        std::cin >> cmd;

        if (cmd == "push_front") {
            int X;
            std::cin >> X;
            deque.push_front(X);
        } else if (cmd == "push_back") {
            int X;
            std::cin >> X;
            deque.push_back(X);
        } else if (cmd == "pop_front") {
            if (deque.empty()) {
                std::cout << -1 << '\n';
            } else {
                std::cout << deque.front() << '\n';
                deque.pop_front();
            }
        } else if (cmd == "pop_back") {
            if (deque.empty()) {
                std::cout << -1 << '\n';
            } else {
                std::cout << deque.back() << '\n';
                deque.pop_back();
            }
        } else if (cmd == "size") {
            std::cout << deque.size() << '\n';
        } else if (cmd == "empty") {
            std::cout << deque.empty() << '\n';
        } else if (cmd == "front") {
            if (deque.empty()) {
                std::cout << -1 << '\n';
            } else {
                std::cout << deque.front() << '\n';
            }
        } else if (cmd == "back") {
            if (deque.empty()) {
                std::cout << -1 << '\n';
            } else {
                std::cout << deque.back() << '\n';
            }
        }
    }

    return 0;
}