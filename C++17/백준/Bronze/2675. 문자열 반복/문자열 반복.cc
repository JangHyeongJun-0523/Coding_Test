#include <iostream>
#include <string>


void printNewString(int test_case) {
    for (int i = 0; i < test_case; ++i) {
        //input for each test cases
        int iteration = 0;
        std::cin >> iteration;
        std::string input_string;
        std::cin >> input_string;

        //print new string
        for (char text : input_string) {
            for (int j = 0; j < iteration; ++j) {
                std::cout << text;
            }
        }
        std::cout << '\n';
    }
}



int main() {
    int test_case = 0;
    std::cin >> test_case;
    printNewString(test_case);

    return 0;
}