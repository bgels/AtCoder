#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
#include <iomanip>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

void solve() {
    int N; cin >> N;
    vector<int> x(N), y(N);

    for(int &i : x){cin >> i;}
    for(int &i : y){cin >> i;}

    int max_dist = INT_MIN;

    for(int i =0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            int xc = x[j] - x[i];
            int yc = y[j] - y[i];
            
            int dis = (xc * xc) + (yc * yc);
            if(dis > max_dist){
                max_dist = dis;
            }
        }
    }

    cout << max_dist;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}