#include <iostream>
#include <vector>
#include <map>
#include <set>

int main(){

    int m; std::cin >> m;
    std::map<std::string, std::set<std::string> > dep;
    std::map<std::string, std::vector<std::string> > invDep;
    std::set<std::string> vertexList;
    std::set<std::string> free;
    std::set<std::string> done;
    std::vector<std::string> ordered;

    for(int p = 0; p < m; p++){
        std::string x, y; std::cin >> x >> y;
        vertexList.insert(x); vertexList.insert(y);
        if(dep.count(y) <= 0){std::set<std::string> emptySet; dep[y] = emptySet;}
        if(invDep.count(x) <= 0){std::vector<std::string> emptyVec; invDep[x] = emptyVec;}
        invDep[x].push_back(y); dep[y].insert(x);
    }

    for(std::set<std::string>::iterator setIter = vertexList.begin(); setIter != vertexList.end(); setIter++){
        std::string current = *setIter;
        if(dep.count(current) <= 0){free.insert(current);}
    }

    while(ordered.size() < vertexList.size()){
        if(free.size() <= 0){break;}
        std::string current = *free.begin(); free.erase(current);
        ordered.push_back(current); done.insert(current);
        std::vector<std::string> downstream = invDep[current];
        for(int p = 0; invDep.count(current) > 0 && p < downstream.size(); p++){
            std::string nv = invDep[current][p];
            dep[nv].erase(current);
            if(dep[nv].size() <= 0){free.insert(nv);}
        }
    }

    for(int p = 0; p < ordered.size(); p++){std::cout << ordered[p] << " ";}
    std::cout << std::endl;

    return 0;
}
