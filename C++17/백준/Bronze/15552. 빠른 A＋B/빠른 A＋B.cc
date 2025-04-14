#include <iostream>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int number_of_test_case = 0;
    std::cin >> number_of_test_case;

    for (int i = 0; i < number_of_test_case; ++i) {
        int A = 0, B = 0;
        std::cin >> A >> B;
        std::cout << A + B << '\n';
    }

    return 0;
}