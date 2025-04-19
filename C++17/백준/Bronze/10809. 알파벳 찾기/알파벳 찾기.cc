#include <iostream>
#include <string>


std::string inputWord() {
    std::string word;
    std::cin >> word;
    
    return word;
}

void printLocation(const std::string& word) {
    for (char text = 'a'; text <= 'z'; ++text) {
            int location = static_cast<int>(word.find(text));
            std::cout << location;
            if (text != 'z') {
                std::cout << ' ';
        }
    }
}

int main() {
    std::string word = inputWord();
    printLocation(word);

    return 0;
}