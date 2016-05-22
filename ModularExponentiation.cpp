#include <iostream>
#include <vector>


std::vector<bool> getBinary(long x){
    std::vector<bool> res;
    while(x > 0){res.push_back(x % 2); x /= 2;}
    return res;
}

int main(){

    int t; std::cin >> t;
    while(t--){
        int64_t x, y, m;
        std::cin >> x >> y >> m;
        std::vector<bool> binaryExp = getBinary(y);

        int64_t res(1);
        x %= m;
        for(int p = 0; p < binaryExp.size(); p++){
            if(binaryExp[p]){res *= x; res %= m;}
            x *= x; x %= m;
        }
        std::cout << res << " ";
    }
    std::cout << std::endl;

    return 0;
}
