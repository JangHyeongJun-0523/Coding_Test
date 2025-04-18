#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> initializeOrder(int basket_num) {
    std::vector<int> initial_order;
    for (int i = 1; i <= basket_num; ++i) {
        initial_order.push_back(i);
    }
    return initial_order;
}

std::vector<int> changeOrder(const std::vector<int>& initial_order, const int iteration) {
    std::vector<int> changed_order = initial_order;
    for (int i = 0; i < iteration; ++i) {
        int reverse_start = 0, reverse_end = 0;
        std::cin >> reverse_start >> reverse_end;
        std::reverse(changed_order.begin() + reverse_start - 1, changed_order.begin() + reverse_end);
    }
    return changed_order;
}

void printResult(const std::vector<int>& changed_order) {
    for (unsigned int i = 0; i < changed_order.size(); ++i) {
        std::cout << changed_order[i];

        if (i < changed_order.size() - 1) {
            std::cout << ' ';
        }
    }
}

int main() {
    int basket_num = 0, iteration = 0;
    std::cin >> basket_num >> iteration;
    std::vector<int> initial_order = initializeOrder(basket_num);
    std::vector<int> changed_order = changeOrder(initial_order, iteration);
    printResult(changed_order);

    return 0;
}