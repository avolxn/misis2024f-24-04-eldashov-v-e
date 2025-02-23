#include <iostream>
#include <string>
#include <vector>

int main() {
    int year;
    std::cin >> year;
    int new_year = year;
    while (true) {
        ++new_year;
        std::string str;
        str = std::to_string(new_year);
        bool set = true;
        for (size_t i = 0; i != str.size(); ++i) {
            for (size_t j = 0; j < i; ++j) {
                if (str[i] == str[j]) {
                    set = false;
                    break;
                }
            }
        }
        if (set == true) {
            std::cout << new_year << std::endl;
            break;
        }
    }
}