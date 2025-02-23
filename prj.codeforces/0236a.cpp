#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string username;
    std::vector<int> letters(26, 0);
    std::cin >> username;
    for (int symbol : username) {
        letters[symbol - 'a'] += 1;
    }
    int count = 0;
    for (size_t i = 0; i != 26; ++i) {
        if (letters[i] != 0) {
            count += 1;
        }
    }
    if (count%2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    } else {
        std::cout << "IGNORE HIM!" << std::endl;
    }
}