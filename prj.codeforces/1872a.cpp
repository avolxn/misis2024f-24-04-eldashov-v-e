#include <iostream>
#include <algorithm>
#include <cmath>

int main() {
    size_t t;
    std::cin >> t;
    for (size_t i = 0; i != t; ++i) {
        float a, b, c;
        std::cin >> a >> b >> c;
        std::cout << std::ceil((std::max(a,b) - (a+b)/2)/c) << std::endl;;
    }

}