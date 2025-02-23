#include <iostream>

int main() {
    int distance;
    std::cin >> distance;
    std::cout << distance/5 + (distance%5 != 0) << std::endl;
}