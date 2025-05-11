#include <iostream>
#include <string>
#include <stack>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string S;
    std::getline(std::cin, S);
    std::stack<char> word_reverse;
    bool tag_start = false;

    for (int i = 0; i < static_cast<int>(S.size()); ++i) {
        if (S[i] == '<') {
            tag_start = true;
            while (!word_reverse.empty()) {
                std::cout << word_reverse.top();
                word_reverse.pop();
            }
            std::cout << S[i];
        } else if (S[i] == '>') {
            tag_start = false;
            std::cout << S[i];
        } else if (tag_start) {
            std::cout << S[i];
        } else if (S[i] != ' ' && S[i] != '<') {
            word_reverse.push(S[i]);
        } else if (S[i] == ' ') {
            while (!word_reverse.empty()) {
                std::cout << word_reverse.top();
                word_reverse.pop();
            }
            std::cout << S[i];
        }
    }

    while (!(word_reverse.empty())) {
        std::cout << word_reverse.top();
        word_reverse.pop();
    }

    return 0;
}