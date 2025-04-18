#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> inputStrings(int num_of_test_case) {
    std::vector<std::string> strings;
    for (int i = 0; i < num_of_test_case; ++i) {
        std::string string;
        std::cin >> string;
        strings.push_back(string);
    }
    return strings;
}

std::vector<std::string> getFirstAndLast(const std::vector<std::string>& strings) {
    std::vector<std::string> first_and_last_texts;
    for (const std::string& word : strings) {
        std::string first_and_last_text = {};
        first_and_last_text.push_back(word.front());
        first_and_last_text.push_back(word.back());
        first_and_last_texts.push_back(first_and_last_text);
    }
    return first_and_last_texts;
}

void printFirstAndLastTexts(const std::vector<std::string>& first_and_last_texts) {
    for (const std::string& first_and_last_text : first_and_last_texts) {
        std::cout << first_and_last_text << '\n';
    }
}

int main() {
    int num_of_test_case = 0;
    std::cin >> num_of_test_case;
    std::vector<std::string> strings = inputStrings(num_of_test_case);
    std::vector<std::string> first_and_last_texts = getFirstAndLast(strings);
    printFirstAndLastTexts(first_and_last_texts);
    
    return 0;
}