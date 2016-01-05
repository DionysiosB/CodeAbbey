#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string s; getline(std::cin, s);
        size_t count(0);
        for(size_t p = 0; p < s.size(); p++){if(s[p] == 'a' || s[p] == 'o' || s[p] == 'u' || s[p] == 'i' || s[p] == 'e' || s[p] == 'y'){++count;}}
        std::cout << count << " ";
    }
    std::cout << std::endl;

    return 0;
}
