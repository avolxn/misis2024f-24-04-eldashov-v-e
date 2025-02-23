#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int t;
    std::cin >> t;
    
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        
        for (int &x : a)
            std::cin >> x;
 
        std::sort(a.begin(), a.end());
        
        int zero_count = std::count(a.begin(), a.end(), 0);
        
        if (zero_count > 0) {
            std::cout << n - zero_count << "\n";
        } else {
            bool has_duplicates = std::adjacent_find(a.begin(), a.end()) != a.end();
            std::cout << (has_duplicates ? n : n + 1) << "\n";
        }
    }
    
    return 0;
}
