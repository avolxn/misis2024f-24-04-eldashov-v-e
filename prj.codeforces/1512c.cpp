#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    for (ssize_t _ = 0; _ != t; ++_) {
        int a, b; 
        std::string str;
        std::cin >> a >> b >> str;
        unsigned size = str.size();
        for (size_t i = (size/2 + size%2); i != size; ++i) {
            if (str[i] == '?' && str[size-i-1] != '?') {
                str[i] = str[size-i-1];
            } else if (str[i] != '?' && str[size-i-1] == '?') {
                str[size-i-1] = str[i];
            }
        }
        a -= std::count(str.begin(), str.end(), '0');
        b -= std::count(str.begin(), str.end(), '1');
        std::string rev = str;
        std::reverse(rev.begin(), rev.end());
        if (a < 0 || b < 0 || (a%2 == 1 && b%2 == 1) || str != rev) {
            std::cout << -1 << std::endl;
            continue;
        }
        if (a%2 == 1) {
            a -= 1;
            str[size/2] = '0';
        }
        if (b%2 == 1) {
            b -= 1;
            str[size/2] = '1';
        }
        while (!(a == 0 && b == 0)) {
            ssize_t i = str.find('?');
            if (a > 0) {
                str[i] = '0';
                str[size-i-1] = '0';
                a -= 2;
            } else {
                str[i] = '1';
                str[size-i-1] = '1';
                b -= 2;
            }
        }
        std::cout << str << std::endl;
    }
}