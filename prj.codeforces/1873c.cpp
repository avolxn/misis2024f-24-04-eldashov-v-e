#include <iostream>
#include <string>

int shot(int x, int y) {
    int mn_x = 0, mn_y = 0;
    if (x <= 4) {
        mn_x = 4-x;
    } else {
        mn_x = x-5;
    }

    if (y <= 4) {
        mn_y = 4-y;
    } else {
        mn_y = y-5;
    }
    int max = std::max(mn_y, mn_x);

    return 5-max;
}

int main() {
    int t;
    std::cin >> t;
    for (ssize_t i = 0; i != t; ++i) {
        std::string str;
        int sm = 0;
        for (ssize_t j = 0; j != 10; ++j) {
            std::cin >> str;
            for (ssize_t k = 0; k != 10; ++k) {
                if (str[k] == 'X') {
                    sm += shot(k, j);
                }
            }
        }
        std::cout << sm << std::endl;
    }
}