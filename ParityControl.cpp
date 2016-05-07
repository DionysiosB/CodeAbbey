#include <cstdio>
#include <iostream>
#include <sstream>

bool hasOddParity(int x){
    int par(0);
    while(x > 0){par += (x % 2); x /= 2;}
    return (par % 2);
}

int main(){

    std::string s; getline(std::cin, s);
    std::istringstream iss(s);
    int n(0); 
    while(iss >> n){
        if(hasOddParity(n)){continue;}
        else if(n > 128){n -= 128;}
        std::cout << char(n);
    }
    std::cout << std::endl;

    return 0;
}
