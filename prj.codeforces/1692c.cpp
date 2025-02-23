#include <iostream>
#include <vector>
#include <string>


std::pair<int, int> find_bishop(const std::vector<std::string>& board) {
    for (int i = 1; i < 7; ++i) {
        for (int j = 1; j < 7; ++j) {
            if (board[i][j] == '#' &&
                board[i - 1][j - 1] == '#' &&
                board[i - 1][j + 1] == '#' &&
                board[i + 1][j - 1] == '#' &&
                board[i + 1][j + 1] == '#') {
                return { i + 1, j + 1 };
            }
        }
    }
    return { -1, -1 };
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::vector<std::string> board(8);
        for (int i = 0; i < 8; ++i) {
            std::cin >> board[i];
        }
        auto [row, col] = find_bishop(board);
        std::cout << row << " " << col << std::endl;
    }
    return 0;
}
