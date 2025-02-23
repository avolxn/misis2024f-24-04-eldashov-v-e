#include <iostream>
#include <string>
#include <vector>

int main() {
    size_t x;
    std::cin >> x;
    std::vector<int> vec(x);
    std::vector<int> count(1000+1);
    std::vector<int> new_vec;
    for (size_t i = 0; i != x; ++i) {
        int elem;
        std::cin >> elem;
        vec[i] = elem;
    }
    for (size_t i = x-1; i+1 != 0; --i) {
        if (count[vec[i]] == 0) {
            count[vec[i]] = 1;
            new_vec.push_back(vec[i]);
        }
    }
    std::cout << new_vec.size() << std::endl;
    for (size_t i = new_vec.size()-1; i+1 != 0; --i) {
        std::cout << new_vec[i] << " ";
    }
    std::cout << std::endl;
    }