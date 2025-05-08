#include <iostream>
#include <string>
#include <stack>

int main() {
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        std::string string;
        std::stack<char> vps;
        std::cin >> string;
        bool broken = false;
        for (int j = 0; j < static_cast<int>(string.size()); ++j) {
            if (string[j] == '(') {
                vps.push(string[j]);
            } else {//string[j] == ')'
                if (vps.empty()) {
                    std::cout << "NO\n";
                    broken = true;
                    break;
                } else {
                    vps.pop();
                }
            }
        }
        if (broken == false) {
            if (vps.empty()) {
                std::cout << "YES\n";
            } else {
                std::cout << "NO\n";
            }
        }
        
    }
    return 0;
}