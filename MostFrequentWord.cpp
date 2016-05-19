#include <iostream>
#include <vector>
#include <map>

const long A = 445;
const long C = 700001;
const long M = 2097152;
const std::string consonants = "bcdfghjklmnprstvwxz";
const std::string vowels = "aeiou";
const int L = 6;
const long NW = 900000;

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

    std::map<std::string, int> wordCount;
    long maxCount(0); std::string freqWord("");
    long seed; std::cin >> seed;
    for(long p = 0; p < NW; p++){
        std::vector<long> letterNums = randomNumbers(A, C, M, seed, L);
        std::string word = convertToString(letterNums, consonants, vowels);
        seed = letterNums.back();
        if(wordCount.count(word) <= 0){wordCount[word] = 1;}
        else{++wordCount[word];}
        //std::cout << word <<  " -> " << wordCount[word] << std::endl;
        if(wordCount[word] > maxCount){maxCount = wordCount[word]; freqWord = word;}

    }
    std::cout << freqWord << std::endl;

    return 0;
}
