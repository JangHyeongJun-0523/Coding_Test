#include <iostream>
#include <stack>
#include <string>


int main() {
    std::string pattern;
    std::cin >> pattern;
    std::stack<char> iron_bars;
    int num_of_iron_bars = 0;

    for (int i = 0; i < static_cast<int>(pattern.size()); ++i) {
        if (pattern[i] == '(') {
            iron_bars.push(pattern[i]);
        } else {//pattern[i] == ')'
            iron_bars.pop();
            if (pattern[i-1] == '(') {
                num_of_iron_bars += static_cast<int>(iron_bars.size());
            } else { //pattern[i-1] == ')'
                num_of_iron_bars += 1;
            }
        }
    }
    std::cout << num_of_iron_bars << std::endl;

    return 0;
}