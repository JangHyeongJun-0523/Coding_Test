#include <iostream>


int main() {
    std::string original_message, rot13;
    std::getline(std::cin, original_message);
    for (char ch : original_message) {
        if ('A' <= ch && ch <= 'Z') {
            ch = (ch - 'A' + 13) % 26 + 'A';
            rot13.push_back(ch);
        } else if ('a' <= ch && ch <= 'z') {
            ch = (ch - 'a' + 13) % 26 + 'a';
            rot13.push_back(ch);
        } else {
            rot13.push_back(ch);
        }
    }
    std::cout << rot13;
    return 0;
}