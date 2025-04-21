#include <iostream>


void printStars() {
    int N = 0;
    std::cin >> N;
    int initial_star = 1, initial_blank = N - 1;

    for(int line = 0; line < (2 * N - 1); ++line) {
        if (line < N ) {
            for(int blank = initial_blank; blank > 0; --blank) {
                std::cout << " ";
            }
            for(int star = initial_star; star > 0; --star) {
                std::cout << "*";
            }
            std::cout << std::endl;
            if (line != N - 1) {
                initial_blank -= 1;
                initial_star += 2;
            }
            
        }
        else {
            initial_blank += 1;
            initial_star -= 2;
            for(int blank = initial_blank; blank > 0; --blank) {
                std::cout << " ";
            }
            for(int star = initial_star; star > 0; --star) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    printStars();

    return 0;
}