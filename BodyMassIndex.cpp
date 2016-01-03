#include <iostream>

int main(){

    const std::string underweight = "under";
    const std::string normal = "normal";
    const std::string overweight = "over";
    const std::string obese = "obese";

    const double L1 = 18.5;
    const double L2 = 25;
    const double L3 = 30;

    int t; std::cin >> t;
    while(t--){
        double weight, height; std::cin >> weight >> height;
        double bmi = weight / (height * height);

        if(bmi < L1){std::cout << underweight;}
        else if(bmi < L2){std::cout << normal;}
        else if(bmi < L3){std::cout << overweight;}
        else if(bmi > L3){std::cout << obese;}
        else{std::cout << "ERROR" << std::endl;}
        std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}
