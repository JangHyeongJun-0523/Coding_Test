#include <iostream>

int main() {
    int N, count = 0;
    std::cin >> N;
    for (int i = 1; i <= N; ++i) {
        bool prime = false;
        int number;
        std::cin >> number;
        for (int j = 1; j <= number; ++j) {
            if ((j != 1 && j != number) && number % j == 0) {
                prime = false;    
                break;
            }
            if (j != 1) prime = true;
        }
        if (prime) ++count;
    }
    std::cout << count;
    return 0;
}