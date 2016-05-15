#include <iostream>
#include <vector>

int main(){

    int t; std::cin >> t;
    while(t--){
        long x; std::cin >> x;
        long div(2);

        std::vector<long> divisors;
        while(x > 1){
            if(x % div == 0){x /= div; divisors.push_back(div);}
            else{++div;}
        }

        for(int p = 0; p < divisors.size() - 1; p++){std::cout << divisors[p] << "*";}
        std::cout << divisors.back() << " ";
    }
    std::cout << std::endl;

    return 0;
}
