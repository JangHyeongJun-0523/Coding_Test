#include <iostream>
#include <string>

int main() {
    std::string S;
    int alphabet[26] = {0};

    std::cin >> S;

    for (int i = 0; i < static_cast<int>(S.size()); ++i) {
        alphabet[int(S[i] - 'a')] += 1;
    }

    for (int i = 0; i < 26; ++i) {
        std::cout << alphabet[i];
        if (i != 25) std::cout << ' ';
    }
    return 0;
}