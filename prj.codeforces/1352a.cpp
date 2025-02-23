#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

int main() {
    unsigned count_nums;
    std::cin >> count_nums;
    for (size_t i = 1; i <= count_nums; ++i) {
        int num;
        std::cin >> num;
        std::string str_num;
        str_num = std::to_string(num);
        int count = str_num.size() - std::count(str_num.begin(), str_num.end(), '0');
        std::cout << count << std::endl;
        for (size_t i = 0; i != str_num.size(); ++i) {
            if (str_num[i] != '0') {
                std::cout << (static_cast<int> (str_num[i]) - '0') * pow(10, str_num.size() - i - 1) << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}