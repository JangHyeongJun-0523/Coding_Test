#include <iostream>

int main() {
    int N, digit = 0;
    std::cin >> N;
    int division = N;
    while (division != 0) {
        division /= 10;
        ++digit;
    }
    bool find = false;
    for (int i = N - 9 * digit; i <= N; ++i) {
        int sum = i;
        int temp = i;
        while(temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == N) {
            std::cout << i << std::endl;
            find = true;
            break;
        }
    }
    if (find == false) std::cout << 0 << std::endl;
    return 0;
}