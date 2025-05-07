#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    //For faster input & output
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    //input
    int N;
    std::cin >> N;
    std::vector<std::string> words;
    for (int i = 0; i < N; ++i) {
        std::string word;
        std::cin >> word;
        words.push_back(word);
    }

    //STL sort and erase duplications
    std::sort(words.begin(), words.end(), [](const auto& a, const auto& b) {
        return (a.length() == b.length()) ? a < b : a.length() < b.length();
    });
    words.erase(std::unique(words.begin(), words.end()), words.end());

    //print
    for (const std::string& word : words) {
        std::cout << word << '\n';
    }

    return 0;
}