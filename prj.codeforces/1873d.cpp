#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    for (ssize_t i = 0; i != t; ++i) {
        int n, k, count = 0;
        std::string str;
        std::cin >> n >> k >> str;
        ssize_t j = 0;
        while (j < n) {
            if (str[j] == 'B') {
                count += 1;
                j += k;
            } else {
                j += 1;
            }
        }
        std::cout << count << std::endl;
    }
}