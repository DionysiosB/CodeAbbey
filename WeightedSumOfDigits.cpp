#include <iostream>
#include <vector>

int main(){

    int t; std::cin >> t;
    while(t--){
        long x; std::cin >> x;
        std::vector<int> digits;
        while(x > 0){digits.push_back(x % 10); x /= 10;}
        int sum(0);
        for(int p = 0; p < digits.size(); p++){sum += (digits.size() - p) * digits[p];}
        std::cout << sum << " ";
    }
    std::cout << std::endl;

    return 0;
}
