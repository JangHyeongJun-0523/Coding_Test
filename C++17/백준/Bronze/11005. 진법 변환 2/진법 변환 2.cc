#include <iostream>
#include <string>

int main() {
    int N, B;
    char c;
    std::string result;
    std::cin >> N >> B;

    while (N > 0) {
        int remain = N % B;
        if (remain >= 0 && remain <= 9) {
            c = '0' + remain;
        } else { //remain >= 10 
            c = 'A' + (remain - 10);
        }
        result = c + result;
        N = N / B;
    }
    std::cout << result << std::endl;

    return 0;
}