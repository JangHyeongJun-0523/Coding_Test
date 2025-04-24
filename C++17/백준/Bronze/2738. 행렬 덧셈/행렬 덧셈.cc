#include <iostream>
#include <vector>

std::pair<std::vector<std::vector<int>>, std::vector<std::vector<int>>> inputMatrices() {
    int row = 0, colounm = 0;
    std::cin >> row >> colounm;
    std::vector<std::vector<int>> first_matrix, second_matrix;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < row; ++j) {
            std::vector<int> line;
            for (int k = 0; k < colounm; ++k) {
                int element = 0;
                std::cin >> element;
                line.push_back(element);
            }
            if (i == 0) first_matrix.push_back(line);
            else if (i == 1) second_matrix.push_back(line);
        }
    }
    return {first_matrix, second_matrix};
}

std::vector<std::vector<int>> sumTwoMatrices (const std::vector<std::vector<int>>& first_matrix, const std::vector<std::vector<int>>& second_matrix) {
    std::vector<std::vector<int>> result;
    int row = static_cast<int>(first_matrix.size());
    int colounm = static_cast<int>(first_matrix[0].size());

    for (int i = 0; i < row; ++i) {
        std::vector<int> line;
        for (int j = 0; j < colounm; ++j) {
            int element = 0;
            element = first_matrix[i][j] + second_matrix[i][j];
            line.push_back(element);
        }
        result.push_back(line);
    }
    return result;
}

void printResult(const std::vector<std::vector<int>>& result) {
    int row = static_cast<int>(result.size());
    int colounm = static_cast<int>(result[0].size());

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < colounm; ++j) {
            std::cout << result[i][j];
            if (j != colounm - 1) std::cout << ' ';
        }
        std::cout << '\n';
    }
}

int main() {
    std::pair two_matrices = inputMatrices();
    std::vector<std::vector<int>> first_matrix = two_matrices.first;
    std::vector<std::vector<int>> second_matrix = two_matrices.second;
    std::vector<std::vector<int>> result = sumTwoMatrices(first_matrix, second_matrix);
    printResult(result);

    return 0;
}