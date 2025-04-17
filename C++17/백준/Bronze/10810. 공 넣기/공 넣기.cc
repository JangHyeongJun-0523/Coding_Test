#include <iostream>
#include <vector>

std::vector<int> InputBalls(int basket_number, int iteration) {
    std::vector<int> ball_input_method(basket_number);
    for (int i = 0; i < iteration; ++i) {
        //input; i: start_index, j: end_index, k: ball_amount
        int start_index = 0, end_index = 0, ball_amount = 0;
        std::cin >> start_index >> end_index >> ball_amount;
        for (int j = start_index - 1; j < end_index; ++j){
            ball_input_method[j] = ball_amount;
        }
    }
    return ball_input_method;
}

void printResult(const std::vector<int>& ball_input_method, const int basket_number) {
    for (int i = 0; i < basket_number; ++i) {
        std::cout << ball_input_method[i];

        if (i < basket_number - 1) {
            std::cout << ' ';
        }
    }
}


int main() {
    int basket_number = 0, iteration = 0;
    std::cin >> basket_number >> iteration;
    std::vector<int> ball_input_method = InputBalls(basket_number, iteration);
    printResult(ball_input_method, basket_number);

    return 0;
}