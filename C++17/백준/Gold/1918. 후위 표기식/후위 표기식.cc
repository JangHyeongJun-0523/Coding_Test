#include <iostream>
#include <string>
#include <stack>


int precedence(char op) {
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0; // op == '('
}


int main() {
    std::string infix_notation;
    std::string postfix_notation;
    std::cin >> infix_notation;
    std::stack<char> arithmetic_operator;
    for (char ch : infix_notation) {
        if ('A' <= ch && ch <= 'Z') {
            postfix_notation += ch;
        } else if (ch == '(') {
                arithmetic_operator.push(ch);
        } else if (ch == ')') {
            while (arithmetic_operator.top() != '(') {
                    postfix_notation += arithmetic_operator.top();
                    arithmetic_operator.pop();
            }
            arithmetic_operator.pop(); // arithmetic_operator.top() == '('
        } else if (ch == '*' || ch == '/' || ch == '+' || ch == '-') {
            while (!(arithmetic_operator.empty()) && 
                precedence(arithmetic_operator.top()) >= precedence(ch)) {
                    postfix_notation += arithmetic_operator.top();
                    arithmetic_operator.pop();
            }
            arithmetic_operator.push(ch);
        }
    }
    while (!(arithmetic_operator.empty())) {
        postfix_notation += arithmetic_operator.top();
        arithmetic_operator.pop();
    }


    std::cout << postfix_notation << std::endl;
    return 0;
}