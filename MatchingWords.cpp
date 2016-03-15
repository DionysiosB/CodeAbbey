#include <iostream>
#include <set>

int main(){

    std::string s;
    std::set<std::string> words;
    std::set<std::string> matching;
    while(true){
        std::cin >> s;
        if(s == "end"){break;}
        if(words.count(s)){matching.insert(s);}
        words.insert(s);
    }

    for(std::set<std::string>::iterator setIter = matching.begin(); setIter != matching.end(); setIter++){std::cout << (*setIter) << " ";}
    std::cout << std::endl;

    return 0;
}
