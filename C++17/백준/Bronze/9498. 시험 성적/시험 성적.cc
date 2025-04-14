#include <iostream>

char GradePrinter(int score) {
    if (score >= 90) {
        return 'A';
    }
    else if (score >= 80) {
        return 'B';
    }
    else if (score >= 70) {
        return 'C';
    }
    else if (score >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}

int main() {
    int score = 0;
    std::cin >> score;
    std::cout << GradePrinter(score) << std::endl;

    return 0;
}