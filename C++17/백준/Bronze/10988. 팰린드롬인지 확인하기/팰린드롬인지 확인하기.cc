#include <iostream>
#include <string>
#include <algorithm>



std::string inputWord() {
    std::string input_word;
    std::cin >> input_word;

    return input_word;
}

bool isPalindrome(const std::string& input_word) {
    std::string reversed_word = input_word;
    std::reverse(reversed_word.begin(), reversed_word.end());

    return input_word == reversed_word;
}

int main() {
    std::string input_word = inputWord();
    std::cout << isPalindrome(input_word);
    return 0;
}