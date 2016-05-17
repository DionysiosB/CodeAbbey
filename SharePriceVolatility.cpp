#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>

double getCV(std::vector<long> priceVec){

    int N = priceVec.size();
    long sum(0), sumSq(0);
    for(int p = 0; p < N; p++){sum += priceVec[p]; sumSq += priceVec[p] * priceVec[p];}
    double mean = 1.0 * sum / N;
    double std = sqrt(1.0 * (sumSq / N - mean * mean));
    double cv = std / mean;
    return cv;
}


int main(){

    const double MULT = 4;
    const double commission = 0.01;

    int t; scanf("%d\n", &t);
    while(t--){
        std::string s; getline(std::cin, s);
        std::istringstream iss(s);
        std::string name; iss >> name;
        std::vector<long> prices;
        long x; while(iss >> x){prices.push_back(x);}
        double cv = getCV(prices);
        if(cv >= MULT * commission){std::cout << name << " ";}
    }
    std::cout << std::endl;

    return 0;
}
