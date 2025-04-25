#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> inputTexts(const int& row) {
    std::vector<std::string> input_text;

    for (int i = 0; i < row; ++i) {
        std::string line;
        std::cin >> line;
        input_text.push_back(line);
    }

    return input_text;
}

void printVirtiacaly(const int& row, const int& max_length, const std::vector<std::string>& input_text) {
    int virtical = 0;
    while (virtical < max_length) {
        for (int line = 0; line < row; ++line) {
            std::string word = input_text[line];
            if (virtical < static_cast<int>(word.size())) {
                std::cout << word[virtical];
            }
        }
        ++virtical;
    }
}

int main() {
    int row = 5, max_length = 15;
    std::vector<std::string> input_text = inputTexts(row);
    printVirtiacaly(row, max_length, input_text);

    return 0;
}