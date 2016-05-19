#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>

int main(){

    long x; scanf("%ld\n", &x);
    std::vector<std::string> inputs;
    std::string s;
    while(getline(std::cin, s)){inputs.push_back(s);}
    //for(int p = 0; p < inputs.size(); p++){std::cout << inputs[p] << std::endl;}

    std::string action; int number; int MOD;

    std::istringstream modString(inputs.back());
    inputs.pop_back();
    modString >> action >> MOD;

    for(int p = 0; p < inputs.size(); p++){
        std::istringstream next(inputs[p]);
        next >> action >> number;
        if(action == "+"){x += number;}
        else if(action == "*"){x *= number;}
        x %= MOD;
    }

    std::cout << x << std::endl;

    return 0;
}
