#include <iostream>
#include <algorithm>

int main() {
    int numbers[5], sum = 0;
    
    //input
    for (int i = 0; i < 5; ++i) {
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    // STL sort
    std::sort(numbers, numbers + 5);

    std::cout << sum / 5 << '\n' << numbers[2] << std::endl;
    return 0;
}