#include <iostream>
#include <string>

int main() {
    size_t n;
    std::cin >> n;
    std::string str;
    std::cin >> str;
    int count = 0;
    for (size_t i = 0; i+2 < n; ++i) {
        if (str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x') {
            for (size_t j = i+2; j < n; ++j) {
                if (str[j] != 'x') {
                    break;
                }
                i = j+1;
                count += 1;
                //std::cout << j << std::endl;
            }
        }
    }
    std::cout << count << std::endl;
}