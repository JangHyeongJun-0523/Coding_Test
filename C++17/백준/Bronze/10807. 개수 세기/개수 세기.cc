#include <iostream>

int main() {
    int num_of_integers = 0, target_num = 0, count = 0;
    std::cin >> num_of_integers;

    int integer_array[num_of_integers] = {};
    for (int i = 0; i < num_of_integers; ++i) {
        std::cin >> integer_array[i];
    }

    std::cin >> target_num;

    for (int i = 0; i < num_of_integers; ++i) {
        if (integer_array[i] == target_num) {
            ++count;
        }
    }
    std::cout << count << '\n';

    return 0;
}