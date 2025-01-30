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
    int n,l;
    cin >> n >> l;
    int x;

    if(n == 1){
        cin >> x;
        cout << std::fixed << std::setprecision(10) << std::max(x, l - x);
        return;
    }

    vector<int> laterns;
    for(int i =0; i<n; i++){
        cin >> x;
        laterns.push_back(x);

    }
    std::sort(laterns.begin(), laterns.end());
    
    double mGap = 0;
    for(int i=0;i<laterns.size() - 1;i++){
        mGap = std::max(mGap, (double) (laterns[i + 1] - laterns[i]));
    }

    cout << std::fixed << std::setprecision(10) << std::max(mGap/2, std::max((double) (laterns[0]), (double) (l - laterns[laterns.size() - 1])));
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}