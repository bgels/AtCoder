//Potion Farming
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;


vector<vector<int>> tree;
vector<bool> visited;
// remove visited, we don`t need to keep that in track
// instead, pass a parameter of just node (the node that we want to travel from) this can be 1 at first
// run dsf again
//find difference to find some value length
// 
void dsf(int node, int parent = -1){
    visited[node] = true;
    cout << "Visiting node: " << node << endl;

    for(int nb : tree[node]){
        cout << "Checking: " << nb << endl;
        if(nb != parent && !visited[nb]) {
            cout << "FOUND UNCHECKED!" <<endl;
            dsf(nb, node);
        }
    }
}

void solve() {
    int N; cin>>N;

    tree.resize(N+1);
    visited.resize(N+1,false);

    for(int i =0; i<N-1; i++){
        int a,b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        cout << "Node " << i << ": ";
        for (int neighbor : tree[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    cout << endl;

    dsf(1);

    
    


}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}