#include <iostream>
#include <vector>

int main() {
    int t;
    
    std::cin >> t;

    for (ssize_t _ = 0; _ != t; ++_) {
        int n = 1;
        long p = 1;
        std::cin >> n;
        std::vector<int> digits(n);
        bool dig0_was = false;

        for (ssize_t i = 0; i != n; ++i) {
            std::cin >> digits[i];

            if (!dig0_was && digits[i] == 0) {
                dig0_was = 1;
            } else {
                p *= digits[i];
            }
        }

        long mx = p;
        for (ssize_t i = 0; i != n; ++i) {
            if (!dig0_was && digits[i] != 0 && p / digits[i] * (digits[i] + 1) > mx) {
                mx = p / digits[i] * (digits[i] + 1);
            }
        }

        std::cout << mx << std::endl;
        
    }
}
