#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;


Matrix initializePlane(const int plain_length) {
    Matrix plain;
    for(int row = 0; row < plain_length; ++row) {
        std::vector<int> one_row;
        for(int column = 0; column < plain_length; ++column) {
            one_row.push_back(0);
        }
        plain.push_back(one_row);
    }
    return plain;
}

Matrix getSquare() {
    int num_of_square = 0, left_gap = 0, bottom_gap = 0;
    Matrix square_positions;
    std::cin >> num_of_square;
    for (int i = 0; i < num_of_square; ++i) {
        std::vector<int> one_position;
        std::cin >> left_gap >> bottom_gap;
        one_position.push_back(left_gap);
        one_position.push_back(bottom_gap);
        square_positions.push_back(one_position);
    }
    return square_positions;
}

void placeSquare(Matrix& plain, const Matrix& square_positions, const int square_length) {
    for(std::vector<int> square_position : square_positions) {
        int left_gap = square_position[0], bottom_gap = square_position[1];
            for (int row = bottom_gap; row < bottom_gap + square_length; ++row) {
                for (int column = left_gap; column < left_gap + square_length; ++column) {
                    plain[row][column] = 1;
                }
            }
    }
}

void printAreaOfSquares(Matrix& plain, const int plain_length) {
    int area = 0;
    for(int row = 0; row < plain_length; ++row){
        for (int column = 0; column < plain_length; ++column){
            area += plain[row][column];
        }
    }
    std::cout << area << std::endl;
}

int main() {
    int plain_length = 100, square_length = 10;
    Matrix plain = initializePlane(plain_length), square_positions = getSquare();
    placeSquare(plain, square_positions, square_length);
    printAreaOfSquares(plain, plain_length);

    return 0;
}