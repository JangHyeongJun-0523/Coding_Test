#include <iostream>
#include <vector>
#include <stack>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int size_of_series;
    std::cin >> size_of_series;
    std::vector<int> series(size_of_series), frequency(1000001, 0), result(size_of_series, -1);
    std::stack<int> index;
    for (int i = 0; i < size_of_series; ++i) {
        std::cin >> series[i];
    }
    for (int i = 0; i < size_of_series; ++i) {
        frequency[series[i]] += 1;
    }

    for (int i = 0; i < size_of_series; ++i) {
        while (!index.empty() && frequency[series[i]] > frequency[series[index.top()]]) {
            result[index.top()] = series[i];
            index.pop();
        }
        index.push(i);
    }

    for (int i = 0; i < size_of_series; ++i) {
        std::cout << result[i];
         if (i != size_of_series - 1) std::cout << ' ';
    }
    return 0;
}