#include <iostream>


void PrintStars(int lines) {
    for (int number_of_stars = 1; number_of_stars <= lines; ++number_of_stars) {
        for (int iteration = lines - number_of_stars; iteration > 0; --iteration) {
            std::cout << ' ';
        }
        for (int iteration = 1; iteration <= number_of_stars; ++iteration) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
}


int main() {
    int lines = 0;
    std::cin >> lines;
    PrintStars(lines);

    return 0;
}