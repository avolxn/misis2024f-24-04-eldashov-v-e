#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    for (ssize_t i = 0; i != t; ++i) {
        int n, k;
        std::string str;
        std::cin >> n >> str >> k;
        std::vector<char> arr(k);
        for (ssize_t j = 0; j != k; ++j) {
            char symb;
            std::cin >> symb;
            arr[j] = symb;
        }
        int last = 0;
        int mx = 0;
        for (int j = 0; j != n; ++j) {
            if (std::count(arr.begin(), arr.end(), str[j]) > 0) {
                mx = std::max(j-last, mx);
                last = j;
            }
        }
        std::cout << mx << std::endl;
    }
    return 0;
}