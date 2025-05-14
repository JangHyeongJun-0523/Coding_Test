#include <iostream>
#include <vector>
#include <stack>


int main() {
    //settings for faster input and output
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    
    //input
    int size_of_series;
    std::cin >> size_of_series;
    std::vector<int> series(size_of_series), result(size_of_series, -1);
    std::stack<int> index;
    for (int i = 0; i < size_of_series; ++i) {
        std::cin >> series[i];
    }

    //searching for proximate bigger number in right-side
    for (int i = 0; i < size_of_series; ++i) {
        while (!index.empty() && series[i] > series[index.top()]) {
            result[index.top()] = series[i];
            index.pop();
        }
        index.push(i);
    }

    //output
    for (int i = 0; i < size_of_series; ++i) {
        std::cout << result[i];
        if (i != size_of_series - 1) std::cout << ' ';
    }
    return 0;
}