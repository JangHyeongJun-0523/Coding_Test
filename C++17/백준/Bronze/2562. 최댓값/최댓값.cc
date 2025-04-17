#include <iostream>
#include <vector>


std::vector<int> inputNineNumbers() {
    std::vector<int> num_array;
    for (int i = 0; i < 9; ++i) {
        int number = 0;
        std::cin >> number;
        num_array.push_back(number);
    }
    return num_array;
}

std::vector<int> findMaxAndOrder(const std::vector<int>& num_array) {
    int max = 0, order = 0;
    std::vector<int> max_and_order;
    for (int i = 0; i < 9; ++i) {
        if (max < num_array[i]) {
            max = num_array[i];
            order = i + 1;
        }
    }
    max_and_order.push_back(max);
    max_and_order.push_back(order);

    return max_and_order;
}

int main() {
    int maximum = 0, order_of_max = 0;
    std::vector<int> num_array = inputNineNumbers();
    std::vector<int> max_and_order = findMaxAndOrder(num_array);
    maximum = max_and_order[0];
    order_of_max = max_and_order[1];

    std::cout << maximum << '\n' << order_of_max << '\n';
    return 0;
}