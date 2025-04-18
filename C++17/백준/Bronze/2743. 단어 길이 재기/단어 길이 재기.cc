#include <iostream>
#include <string>



std::string inputString() {
    std::string word;
    std::cin >> word;
    return word;
}

int getLengthOfWord(const std::string& word) {
    int length_of_word = static_cast<int>(word.size());
    return length_of_word; 
}


int main() {
    std::string word = inputString();
    int length_of_word = getLengthOfWord(word);
    std::cout << length_of_word;

    return 0;
}