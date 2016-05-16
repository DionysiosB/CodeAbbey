#include <iostream>
#include <vector>
#include <cmath>

std::vector<bool> getPrimes(long N){

    std::vector<bool> isPrime(N + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for(long p = 2; p <= sqrt(N) + 1; p++){
        if(!isPrime[p]){continue;}
        for(long q = 2 * p; q <= N; q += p){isPrime[q] = 0;}
    }
    return isPrime;
}


int main(){

    const long UPPER_BOUND = 3000000;
    std::vector<bool> isPrime = getPrimes(UPPER_BOUND);

    int t; std::cin >> t;
    while(t--){
        long a, b; std::cin >> a >> b;
        long count(0);
        for(long p = a; p <= b; p++){count += isPrime[p];}
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
