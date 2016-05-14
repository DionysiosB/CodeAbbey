#include <iostream>
#include <set>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::set<long> numbers;
        long x; std::cin >> x;
        long rep(0);
        while(numbers.count(x) == 0){numbers.insert(x); x = ((x * x) / 100) % 10000; ++rep;}
        std::cout << rep << " ";
    }
    std::cout << std::endl;

    return 0;
}
