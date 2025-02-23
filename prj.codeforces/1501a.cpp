#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n), b(n), tm(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> tm[i];
        }

        int currentTime = 0;

        for (int i = 0; i < n; i++) {
            currentTime += a[i] - (i == 0 ? 0 : b[i - 1]) + tm[i];
            if (i == n - 1) {
                break;
            }
            int waitTime = (b[i] - a[i] + 1) / 2;
            currentTime = std::max(currentTime + waitTime, b[i]);
        }

        std::cout << currentTime <<"\n";
    }

    return 0;
}
