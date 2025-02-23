#include <iostream>

int main() {
    long long n, m, pos = 1, time = 0;
    std::cin >> n >> m;
    for (int i = 0; i != m; ++i) {
        long long a;
        std::cin >> a;
        if (a >= pos) {
            time += a-pos;
            pos = a;
        } else {
            time += (n-pos+a);
            pos = a;
        }
    }
    std::cout << time << "\n";
}