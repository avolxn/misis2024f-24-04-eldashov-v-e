#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    for (ssize_t _ = 0; _ != t; ++_) {
        std::string str;
        std::cin >> str;
        int size = str.size();
        bool ans = true;
        int start = 0;
        for (ssize_t i = 1; i != size; ++i) {
            if (str[i] != str[i-1]) {
                if (i - start < 2) {
                    ans = false;
                }
                start = i;
            }
        }

        if (str[size-1] != str[size-2]) {
            ans = false;
        }

        if (ans) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}
