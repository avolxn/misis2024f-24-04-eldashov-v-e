#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, m;
        std::cin >> n >> m;
        std::vector<std::string> s(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> s[i];
        }

        int minx = INT_MAX, miny = INT_MAX;

        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < m; ++y) {
                if (s[x][y] == 'R') {
                    minx = std::min(minx, x);
                    miny = std::min(miny, y);
                }
            }
        }

        std::cout << (s[minx][miny] == 'R' ? "YES" : "NO") << "\n";
    }

    return 0;
}
