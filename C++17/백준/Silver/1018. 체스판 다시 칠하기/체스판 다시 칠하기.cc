#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    char chess_board[N][M];
    //input chess board
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> chess_board[i][j];
        }
    }
    // check 8 by 8 sections
    int minimum = 64;
    for (int i = 0; i + 7 < N; ++i) {
        for (int j = 0; j + 7 < M; ++j) {
            int white_first = 0, black_first = 0;
            for (int y = i; y <= i + 7; ++y) {
                for (int x = j; x <= j + 7; ++x) {
                    char expected_color_white = ((x + y) % 2 == 0) ? 'W' : 'B';
                    char expected_color_black = ((x + y) % 2 == 0) ? 'B' : 'W';

                    if (chess_board[y][x] != expected_color_white) ++white_first;
                    if (chess_board[y][x] != expected_color_black) ++black_first;
                }
            }
            int current_min = std::min(white_first, black_first);
            minimum = std::min (minimum, current_min);
        }
    }
    std::cout << minimum << std::endl;
    return 0;
}