#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (ssize_t _ = 0; _ != t; ++_) {
        int n, k, r, c;
        std::cin >> n >> k >> r >> c;
        std::vector<std::vector<char>> matrix(n+1, std::vector<char>(n+1, '.'));
        std::vector<int> max_i(n+1, 1000000000);
        std::vector<int> min_i(n+1, 1000000000);
        int last_j = -100000000;
        for (int j = 1; j != n+1; ++j) {
            if (j == c || (std::abs(c-j)%k==0 && std::abs(last_j-j) >=k)) {
                matrix[r][j] = 'X';
                max_i[j] = r;
                min_i[j] = r;
                last_j = j;
            }
        }
        for (int i = r-1; i != 0; --i) {
            last_j = -100000000;
            for (int j = 1; j != n+1; ++j) {
                if (min_i[j]-i >= k && std::abs(last_j-j) >=k) {
                    if (max_i[j] == 1000000000) {
                        max_i[j] = i;
                    }
                    min_i[j] = i;
                    matrix[i][j] = 'X';
                    last_j = j;
                }
            }
        }
        for (int i = r+1; i != n+1; ++i) {
            last_j = -100000000;
            for (int j = 1; j != n+1; ++j) {
                if (std::abs(i-max_i[j]) >= k && std::abs(last_j-j) >=k) {
                    max_i[j] = i;
                    matrix[i][j] = 'X';
                    last_j = j;
                }
            }
        }
        for (int i = 1; i != n+1; ++i) {
            for (int j = 1; j != n+1; ++j) {
                std::cout << matrix[i][j];
            }
            std::cout << std::endl;
        }
    }
    return 0;
}