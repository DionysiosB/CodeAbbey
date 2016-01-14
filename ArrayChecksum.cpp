#include <iostream>

int main(){

    const int L = 113;
    const int M = 10000007;

    long n; std::cin >> n;
    long result(0);
    while(n--){
        long x; std::cin >> x;
        result += x;
        result *= L;
        result %= M;
    }
    std::cout << result << std::endl;

    return 0;
}
