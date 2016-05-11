#include <iostream>
#include <vector>
#include <map>
#include <set>

void dfs(int self, const std::vector<std::set<int> > &edgeVec, std::vector<int> &caller){

    std::set<int> adj = edgeVec[self];
    for(std::set<int>::iterator setIter = adj.begin(); setIter != adj.end(); setIter++){
        int v = *setIter;
        if(caller[v] >= 0){continue;}
        caller[v] = self;
        dfs(v, edgeVec, caller);
    }
}


int main(){

    int n, m; std::cin >> n >> m;
    std::vector<std::set<int> > edges(n);
    for(int p = 0; p < m; p++){
        int x, y; std::cin >> x >> y;
        edges[x].insert(y);
        edges[y].insert(x);
    }

    std::vector<int> from(n, -1);
    from[0] = 0;
    dfs(0, edges, from);
    from[0] = -1;
    for(int p = 0; p < n; p++){std::cout << from[p] << " ";}
    std::cout << std::endl;

    return 0;
}
