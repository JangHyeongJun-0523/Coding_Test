#include <iostream>
#include <vector>


std::vector<int> readIntegers(int num_of_integers){
    std::vector<int> integer_array(num_of_integers);
    for (int i = 0; i < num_of_integers; ++i){
        std::cin >> integer_array[i];
    }

    return integer_array;
}

std::vector<int> isSmallerThanReference(const std::vector<int>& integer_array, int reference_num) {
    std::vector<int> smaller_list;
    for (int num : integer_array) {
        if (num < reference_num) {
            smaller_list.push_back(num);
        }
    }
    return smaller_list;
}


int main() {
    int num_of_integers = 0, reference_num = 0;
    std::cin >> num_of_integers >> reference_num;
    
    std::vector<int> integer_array = readIntegers(num_of_integers);
    std::vector<int> smaller_than_reference = isSmallerThanReference(integer_array, reference_num);

    for (int num : smaller_than_reference) {
        std::cout << num << ' ';
    }    

    return 0;
}