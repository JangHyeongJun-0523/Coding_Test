#include <iostream>


char inputText() {
    char input_text = ' ';
    std::cin >> input_text;
    return input_text;
}

int main() {
    char input_text = inputText();
    int ascii_code = static_cast<int>(input_text);
    std::cout << ascii_code;

    return 0;
}