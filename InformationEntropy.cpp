#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

int main(){

    const int N = 26 + 1;    //Small letters plus space;
    const int S = 26;       //The index of space

    int t; scanf("%d\n", &t);
    while(t--){
        std::string s; getline(std::cin, s);
        std::vector<int> count(N, 0);
        int L = s.size();
        for(int p = 0; p < s.size(); p++){
            if('a' <= s[p] && s[p] <= 'z'){++count[s[p] - 'a'];}
            else if(s[p] == ' '){++count[S];}
        }

        long double entropy(0.0);
        for(int p = 0; p < N; p++){
            if(count[p] == 0){continue;}
            long double prob = 1.0 * count[p] / L;
            entropy += prob * log2(1.0 / prob);
        }
        std::cout.precision(10);
        std::cout << entropy << " ";
    }
    std::cout << std::endl;

    return 0;
}
