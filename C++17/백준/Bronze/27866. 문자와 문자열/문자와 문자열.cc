#include <iostream>
#include <string>


std::string inputWord() {
    std::string word;
    std::cin >> word;
    return word;
}


char getText(const std::string& word) {
    int order = 0;
    std::cin >> order;
    char target_text = word[order - 1];
    return target_text;
}

int main() {
    std::string word = inputWord();
    char target_text = getText(word);
    std::cout << target_text;

    return 0;
}