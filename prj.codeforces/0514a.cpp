#include <iostream>
#include <string>

int main() {
    std::string num;
    std::cin >> num;
    std::string str;
    for (size_t i = 0; i != num.size(); ++i) {
        if ( (i == 0 && num[i] != '9') || (i != 0) ) {
            int dig = static_cast<int>(num[i])-'0';
            if (dig > 9-dig) {
                str += std::to_string(9-dig);
            } else {
                str += std::to_string(dig);
            }
        } else {
            str += num[i];
        }
    }
    std::cout << str << std::endl;
}