#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> getWords() {
    int word_number = 0;
    std::vector<std::string> word_list;
    std::cin >> word_number;
    for (int i = 0; i < word_number; ++i) {
        std::string word;
        std::cin >> word;
        word_list.push_back(word);
    }

    return word_list;
}

bool isGroupWord(const std::string& word) {
    bool visited[26] = {false};
    char prev = '\0';

    for (char text : word) {
        if (text != prev) {
            if (visited[text - 'a']) {
                return false;
            }
            visited[text - 'a'] = true;
        }
        prev = text;
    }
    return true;
}

int countWords(const std::vector<std::string>& word_list) {
    int group_word_num = 0;

    for (const std::string& word : word_list) {
        if (isGroupWord(word) == true) group_word_num++;
    }

    return group_word_num;
}


int main() {
    std::vector<std::string> word_list = getWords();
    std::cout << countWords(word_list) << std::endl;

    return 0;
}