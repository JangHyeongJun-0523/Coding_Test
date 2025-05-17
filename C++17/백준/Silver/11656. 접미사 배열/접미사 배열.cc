#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main() {
    std::string word;
    std::cin >> word;
    std::vector<std::string> suffixes;
    for (int i = 0; i < static_cast<int>(word.size()); ++i) {
        std::string suffix = word.substr(i, static_cast<int>(word.size()));
        suffixes.push_back(suffix);
    }

    std::sort(suffixes.begin(), suffixes.end());

    for (std::string suffix : suffixes) {
        std::cout << suffix << '\n';
    }
    
    return 0;
}