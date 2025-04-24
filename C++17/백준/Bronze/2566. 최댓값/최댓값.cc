#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;
using RowOfMatrix = std::vector<int>;

Matrix inputMatrix() {
    int rows = 9, columns = 9;
    Matrix input_matrix;
    for (int row = 0; row < rows; ++row) {
        RowOfMatrix line;
        for (int column = 0; column < columns; ++column) {
            int element = 0;
            std::cin >> element;
            line.push_back(element);
        }
        input_matrix.push_back(line);
    }
    return input_matrix;
}

void findMaximum(const Matrix& input_matrix) {
    int maximum = -1, target_row = 0, target_column = 0, rows = 9, columns = 9;
    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < columns; ++column) {
            if (maximum < input_matrix[row][column]) {
                maximum = input_matrix[row][column];
                target_row = row + 1;
                target_column = column + 1;
            }
        }
    }
    std::cout << maximum << std::endl; 
    std:: cout << target_row << ' ' << target_column << std::endl;
}

int main() {
    Matrix input_matrix = inputMatrix();
    findMaximum(input_matrix);

    return 0;
}