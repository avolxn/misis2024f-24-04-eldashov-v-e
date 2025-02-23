#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i != t; ++i) {
        int n, m, s_x, s_y, d, x = 1, y = 1, count = 0;
        std::cin >> n >> m >> s_x >> s_y >> d;
        while (true) {
            if (x+1 <= n && std::abs(x+1 - s_x) + std::abs(y - s_y) > d) {
                x += 1;
                count += 1;
            } else if (y+1 <= m && std::abs(y+1 - s_y) + std::abs(x - s_x) > d) {
                y += 1;
                count += 1;
            } else {
                if (x == n && y == m) {
                    break;
                } else {
                    x = 1, y = 1, count = 0;
                    while (true) {
                        if (y+1 <= m && std::abs(y+1 - s_y) + std::abs(x - s_x) > d) {
                            y += 1;
                            count += 1;
                        } else if (x+1 <= n && std::abs(x+1 - s_x) + std::abs(y - s_y) > d) {
                            x += 1;
                            count += 1;
                        } else {
                            break;
                        }
                    }
                }
                break;
            }
        }
        if (x == n && y == m) {
            std::cout << count << std::endl;;
        } else {
            std::cout << -1 << std::endl;
        }
    }
}