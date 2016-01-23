#include <iostream>
#include <vector>

int main(){

    long m, n; std::cin >> m >> n;
    std::vector<long> count(n + 1);
    while(m--){int x; std::cin >> x; ++count[x];}
    for(int p = 1; p <= n; p++){std::cout << count[p] << " ";}
    std::cout << std::endl;

    return 0;
}
