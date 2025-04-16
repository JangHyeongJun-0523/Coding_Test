#include <iostream>
#include <vector>

std::vector<int> readIntegers(int num_of_integers) {
    std::vector<int> integer_array;
    for (int i = 0; i < num_of_integers; ++i) {
        int num = 0;
        std::cin >> num;
        integer_array.push_back(num);
    }
    return integer_array;
}

int findMax(const std::vector<int>& integer_array) {
    int maxium = integer_array[0];
    for (int num : integer_array) {
        if (maxium < num) {
            maxium = num;
        }
    }
    return maxium;
}

int findMin(const std::vector<int>& integer_array) {
    int minimum = integer_array[0];
    for (int num : integer_array) {
        if (minimum > num) {
            minimum = num;
        }
    }
    return minimum;
}


int main() {
    int num_of_integers = 0;
    std::cin >> num_of_integers;
    
    std::vector<int> integer_array = readIntegers(num_of_integers);
    int minimum = findMin(integer_array);
    int maxium = findMax(integer_array);

    std::cout << minimum << ' ' << maxium << '\n';
    return 0;
}