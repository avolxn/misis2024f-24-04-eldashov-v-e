#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    int t = 0;
    std::cin>>t;
    int f = 0;
    for (int q = 0; q < t; ++q){
        int n = 0;
        int k = 0;
        std::cin>>n>>k;
        std::string str = "";
        std::cin>>str;
        std::vector <int> example (k, '?');
        for (int i = 0; i < n; ++i){
            if (example[i % k] == '?' && str[i] != '?'){
                example[i%k] = str[i];
            }
            if (example[i%k] != '?' && str[i] == '?'){
                continue;
            }
            if (example[i%k] == str[i]){
                continue;
            } else{
                std::cout<<"NO"<<std::endl;
                f = 1;
                break;
            }

        }
        if (f == 1){
            f = 0;
            continue;
        }
        int counter0 = std::count(str.begin(), str.end()-n+k,'0');
        int counter1 = std::count(str.begin(), str.end()-n+k,'1');
        int counter = std::count(str.begin(), str.end()-n+k,'?');
        if (counter == 0){
            if (counter0 == counter1){
                std::cout<<"YES"<<std::endl;
            } else{
                std::cout<<"NO"<<std::endl;
            }
        } else{
            int counter0 = std::count(example.begin(), example.end(),'0');
            int counter1 = std::count(example.begin(), example.end(),'1');
            int counter = std::count(example.begin(), example.end(),'?');
            if ((counter - std::abs(counter0 - counter1)) >= 0 && (counter - std::abs(counter0 - counter1)) % 2 == 0){
                std::cout<<"YES"<<std::endl;
            } else{
                std::cout<<"NO"<<std::endl; 
        }
    }
    
}
}