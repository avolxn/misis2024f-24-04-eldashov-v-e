#include <iostream>
#include <set>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i != t; ++i) {
        int n, x, mx = 0;
        std::cin >> n >> x;
        std::set<int> numbers;
        for (int j = 0; j != n; ++j) {
            int num;
            std::cin >> num;
            numbers.insert(num);
            mx = std::max(mx, num);
        }
        int elem = 0;
        while (x != 0 || numbers.count(elem+1) != 0) {
            elem += 1;
            if (numbers.count(elem) == 0) {
                x -= 1;
            }
        }
        std::cout << elem << std::endl;
    }
}