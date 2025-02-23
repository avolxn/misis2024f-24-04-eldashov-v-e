#include <iostream>
//#include <algorithm>

int main() {
    int n, k, mx = -2147483647;
    std::cin >> n >> k;
    for (int i = 0; i != n; ++i) {
        int f, t;
        std::cin >> f >> t;
        if (f - (t-k) > mx && t > k) {
            mx = f - (t-k);
        }
        if (f > mx && t <= k) {
            mx = f;
        }
    }
    std::cout << mx << std::endl;
}