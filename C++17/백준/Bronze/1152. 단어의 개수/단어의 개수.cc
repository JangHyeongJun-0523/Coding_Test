#include <iostream>
#include <string>

std::string inputString() {
    std::string words;
    std::getline(std::cin, words);
    
    return words;
}

int wordCount (std::string& words) {
    int num_of_words = 0;
    bool word_start = false;

    for (int i = 0; i < static_cast<int>(words.size()); ++i) {
        if (words[i] != ' ' && word_start == false) {
            word_start = true;
            ++num_of_words;
            continue;
        }
        else if (words[i] == ' ' && word_start == true) {
            word_start = false;
        }
    }
    return num_of_words;
}

int main() {
    std::string words = inputString();
    int num_of_words = wordCount(words);
    std::cout << num_of_words;

    return 0;
}