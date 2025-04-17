#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> getOriginalNums(int numbers) {
    std::vector<int> original_nums;
    for (int i = 0; i < numbers; ++i) {
        int input = 0;
        std::cin >> input;
        original_nums.push_back(input);
    }
    return original_nums;
}

std::vector<int> getRemains(const std::vector<int>& original_nums, int divisor) {
    std::vector<int> remains = original_nums;
    for (unsigned int i = 0; i < remains.size(); ++i) {
        remains[i] %= divisor;
    }
    return remains;
}

int getNumOfKinds(std::vector<int> remains) {
    int kind_of_remains = 0;
    std::sort(remains.begin(), remains.end());
    remains.resize(std::unique(remains.begin(), remains.end()) - remains.begin());

    kind_of_remains = remains.size();
    return kind_of_remains;
}

int main() {
    int  numbers = 10, divisor = 42;
    std::vector<int> original_nums = getOriginalNums(numbers);
    std::vector<int> remains = getRemains(original_nums, divisor);
    int kind_of_remains = getNumOfKinds(remains);
    std::cout << kind_of_remains;

    return 0;
}