#include <iostream>

int main() {
    int n, m, a, b;
    int ans = 0;
    std::cin >> n >> m >> a >> b;
    int last = n;
    if (n <= m) {
        if (n*a > b) {
            ans = b;
        } else {
            ans = n*a;
        }
    } else {
        if (n/m*m*a > n/m*b) {
            last -= n/m*m;
            ans += n/m*b;
            // 1
            //std::cout << "1 " << ans << " " << last << std::endl;
            if (last*a > b) {
                last = 0;
                ans += b;
                // 2
                //std::cout << "2 " << ans << " " << last << std::endl;
            } else {
                ans += last*a;
                last = 0;
                // 3
                //std::cout << "3 " << ans << " " << last << std::endl;
            }
        } else {
            ans += n*a;
            last = 0;
            // 4
            //std::cout << "4 " << ans << " " << last << std::endl;
        }
    }
    std::cout << ans << std::endl;
}