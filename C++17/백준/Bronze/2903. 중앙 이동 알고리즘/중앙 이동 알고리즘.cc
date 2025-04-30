#include <iostream>

int main() {
    int N, points_in_line = 2, total_points = 4, additional_points = 1;
    std::cin >> N;
    for (int i = 1; i <= N; ++i) { //2 power N
        additional_points *= 2;
    }
    --additional_points; // 2 power N - 1: Sum of geometric sequence
    points_in_line += additional_points;
    total_points = points_in_line * points_in_line;
    std::cout << total_points << std::endl;
    return 0;
}