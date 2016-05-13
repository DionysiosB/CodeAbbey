#include <iostream>
#include <vector>

int main(){

    int t; std::cin >> t;
    while(t--){
        int n, k; std::cin >> n >> k;
        if(2 * k > n){k = n - k;}
        std::vector<std::vector<int64_t> > comb(n + 1, std::vector<int64_t>(k + 1, 0));
        for(int row = 0; row <= n; row++){comb[row][0] = 1;}
        for(int row = 1; row <= n; row++){for(int col = 1; col <= k; col++){comb[row][col] = comb[row - 1][col] + comb[row - 1][col - 1];}}
        std::cout << comb[n][k] << " ";
    }
    std::cout << std::endl;

    return 0;
}
