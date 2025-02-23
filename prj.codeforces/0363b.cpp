#include <iostream>
#include <vector>

int main() {
    size_t n, k;
    std::cin >> n >> k;
    std::vector<int> vec(n);
    for (size_t i = 0; i != n; ++i) {
        int num;
        std::cin >> num;
        vec[i] = num;
    }
    int sum = 0;
    for (size_t i = 0; i != k; ++i) {
        sum += vec[i];
    }
    int pos = 1, mn = sum;
    if (n > 1 && n > k) {
        for (size_t i = 1; i != n-k+1; ++i) {
            sum = sum - vec[i-1] + vec[i+k-1];
            if (mn > sum) {
                mn = sum;
                pos = i+1;
            }
        }
    }
    std::cout << pos << std::endl;
}