#include <iostream>


int zero_counter(long long number, int factor) {
    int zero_count = 0;
    while (number > 0) {
        zero_count += number / factor;
        number /= factor;
    }
    return zero_count;
}

int main() {
    long long n, m;
    std::cin >> n >> m;

    int count2 = zero_counter(n, 2) - zero_counter(m, 2) - zero_counter(n - m, 2);
    int count5 = zero_counter(n, 5) - zero_counter(m, 5) - zero_counter(n - m, 5); 

    std::cout << std::min(count2, count5);
    return 0;
}