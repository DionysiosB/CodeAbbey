#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long a, c, m, x, n; std::cin >> a >> c >> m >> x >> n;
        while(n--){x = (a * x + c) % m;}
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
