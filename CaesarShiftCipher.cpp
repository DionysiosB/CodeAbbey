#include <cstdio>
#include <iostream>

int main(){

    const int N = 26;

    int t, k; scanf("%d %d\n", &t, &k);
    k = ((k % N) + N) % N;
    while(t--){
        std::string s; getline(std::cin, s);
        for(size_t p = 0; p < s.size(); p++){
            if(s[p] < 'A' || s[p] > 'Z'){continue;}
            s[p] = 'A' + (s[p] - 'A' + N - k) % N;
        }
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}
