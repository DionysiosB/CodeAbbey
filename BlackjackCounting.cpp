#include <cstdio>
#include <iostream>
#include <sstream>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string s; getline(std::cin, s);
        std::istringstream iss(s);
        char card(0);
        int score(0);
        int aces(0);
        while(iss >> card){
            if(card == 'A'){++aces; score += 11;}
            else if(card == 'T' || card == 'J' || card == 'Q' || card == 'K'){score += 10;}
            else{score += (card - '0');}
        }
        while(score > 21 && aces > 0){--aces; score -= 10;}
        if(score <= 21){std::cout << score;} else {std::cout << "Bust";}
        std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}
