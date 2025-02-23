#include <iostream>

int main() {
    size_t n;
    std::cin >> n;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (size_t i = 0; i < n; ++i) {
        int x, y, z;
        std::cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}