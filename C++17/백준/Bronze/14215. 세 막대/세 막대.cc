#include <iostream>

int main() {
    int a, b, c, max,circumference;
    std::cin >> a >> b >> c;
    max = std::max((std::max(a, b)), c);
    if (max == a && max != b && max !=c) {
        if (a >= b + c) circumference = 2 * (b + c) - 1;
        else circumference = a + b + c;
    } else if (max == b && max != c && max !=a) {
        if (b >= c + a) circumference = 2 * (c + a) - 1;
        else circumference = a + b + c;
    } else if (max == c && max != a && max !=b) {
        if (c >= a + b) circumference = 2 * (a + b) - 1;
        else circumference = a + b + c;
    } else circumference = a + b + c;
    std::cout << circumference << std::endl;
    return 0;
}