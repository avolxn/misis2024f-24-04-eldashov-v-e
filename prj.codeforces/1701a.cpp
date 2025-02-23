#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (ssize_t _ = 0; _ != t; ++_) {
        bool any_grave = 0;
        std::vector<std::vector<int>> matrix(2, std::vector<int>(2,0));
        for (ssize_t i = 0; i != 2; ++i) {
            for (ssize_t j = 0; j != 2; ++j) {
                std::cin >> matrix[i][j];
                if (matrix[i][j] == 1) {
                    any_grave = true;
                }
            }
        }

        if ((matrix[0][0] == matrix[1][1] && matrix[0][0] == 1) &&
         (matrix[1][0] == matrix[0][1] && matrix[1][0] == 1)) {
            std::cout << 2 << std::endl;
         }
        else if (any_grave) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
        
        
    }
}
