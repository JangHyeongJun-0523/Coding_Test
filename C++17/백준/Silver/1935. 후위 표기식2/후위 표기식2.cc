#include <iostream>
#include <stack>
#include <string>
#include <iomanip>


int main() {
    int N;
    double result = 0;
    std::string postfix_expression;
    std::cin >> N;
    std::cin >> postfix_expression;
    double operand[26];
    for (int i = 0; i < N; ++i) {
        std::cin >> operand[i];
    }
    std::stack<double> s;
    for (char ch : postfix_expression) {
        if ('A' <= ch && ch <= 'Z') {
            s.push(operand[ch - 'A']);
        } else {
            double b = s.top(); s.pop();
            double a = s.top(); s.pop();
            double result;

            if (ch == '+') result = a + b;
            else if (ch == '-') result = a - b;
            else if (ch == '*') result = a * b;
            else if (ch == '/') result = a / b;

            s.push(result);
        } 
    }

    std::cout << std::fixed << std::setprecision(2) << s.top() << '\n';
    return 0;
}