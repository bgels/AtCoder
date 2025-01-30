#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

void solve() {
    int x;
    while(cin >> x){
        if(x < 10){
            cout << "B";
        }else if(x % 10 > 0){
            cout << "E";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();

    return 0;
}