#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> days(n);
    for (int i = 0; i < n; i++) {
        std::cin >> days[i];
    }
    if (days[0] == 0 && n == 1) {
        std::cout << 1 << std::endl;
        return;
    }

    int height = days[0] ? 2 : 1;
    bool withered = true;
    for (int i = 1; i < n; i++) {
        if (days[i] == 1) {
            if (days[i - 1] == 1) {
                height += 5;
            }
            else {
                height += 1;
            }
        }
        else {
            if (days[i - 1] == 0) {
                withered = false;
                break;
            }
        }
    }

    if (withered==false) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << height << std::endl;
    }
}

int main() {
    int t;
    std::cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
