#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        std::string k, q; std::cin >> k >> q;
        int xk = k[0] - 'a';
        int yk = k[1] - '0';
        int xq = q[0] - 'a';
        int yq = q[1] - '0';

        bool res = (xk == xq || yk == yq || (xk + yk) == (xq + yq) || (xk - yk) == (xq - yq));
        std::cout << (res ? "Y " : "N ");
    }
    std::cout << std::endl;

    return 0;
}
