#include <iostream>
#include <vector>

const long A = 445;
const long C = 700001;
const long M = 2097152;
const std::string consonants = "bcdfghjklmnprstvwxz";
const std::string vowels = "aeiou";

std::vector<long> randomNumbers(long a, long c, long m, long x, long n){
    std::vector<long> res;
    while(n--){x = (a * x + c) % m; res.push_back(x);}
    return res;
}

std::string convertToString(std::vector<long> vec, std::string consonants, std::string vowels){
    
    std::string word = "";
    for(int p = 0; p < vec.size(); p++){
        if(p % 2){word += vowels[vec[p] % vowels.size()];}
        else{word += consonants[vec[p] % consonants.size()];}
    }
    return word;
}

int main(){

    long numWords, seed; std::cin >> numWords >> seed;
    while(numWords--){
        int length; std::cin >> length;
        std::vector<long> letterNums = randomNumbers(A, C, M, seed, length);
        std::string word = convertToString(letterNums, consonants, vowels);
        seed = letterNums.back();
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
