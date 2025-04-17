#include <iostream>
#include <vector>

std::vector<int> initializeBaskets(int basket_num) {
    std::vector<int> initialized_baskets ;
    //set baskets from 1 to 'basket_num'
    for (int i = 0; i < basket_num; ++i) {
        initialized_baskets .push_back(i + 1); //1 : gap between address and value
    }
    return initialized_baskets ;
}

std::vector<int> switchBaskets(const std::vector<int>& initialized_baskets , int iteration) {
    std::vector<int> switched_baskets = initialized_baskets ;
    for (int i = 0; i < iteration; ++i) {
        int first_address = 0, second_address = 0;
        std::cin >> first_address >> second_address;
        --first_address; --second_address; //-1 : adjust gap between input and address
        std::swap(switched_baskets[first_address], switched_baskets[second_address]);
    }
    return switched_baskets;
}

void printResult(const std::vector<int>& switched_baskets, int basket_num) {
    for (int i = 0; i < basket_num; ++i) {
        std::cout << switched_baskets[i] << (i < basket_num - 1 ? ' ' : '\n');
    }
}


int main() {
    int basket_num = 0, iteration = 0;
    std::cin >> basket_num >> iteration;
    std::vector<int> initialized_baskets = initializeBaskets(basket_num);
    std::vector<int> switched_baskets = switchBaskets(initialized_baskets, iteration);
    printResult(switched_baskets, basket_num);

    return 0;
}