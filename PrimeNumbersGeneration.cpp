#include <iostream>
#include <vector>
#include <cmath>

int main(){

    //Generate primes;
    const int N = 5e6;
    std::vector<bool> isPrime(N, 1);
    isPrime[0] = isPrime[1] = 0;
    for(long p = 2; p <= sqrt(N); p++){
        if(!isPrime[p]){continue;}
        for(long q = 2 * p; q <= N; q += p){isPrime[q] = 0;}
    }

    std::vector<long> primes;
    for(long p = 0; p < N; p++){if(isPrime[p]){primes.push_back(p);}}

    int t; std::cin >> t;
    while(t--){long n; std::cin >> n; std::cout << primes[n - 1] << " ";}
    std::cout << std::endl;

    return 0;
}
