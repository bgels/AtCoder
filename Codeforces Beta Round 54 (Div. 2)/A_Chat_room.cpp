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
    string s;
    cin >> s;
    string hello = "hello";
    int i = 0;
    for(char x : s){
        if(x == hello[i]){
            i++;
        }
        if(i == hello.length()){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" <<endl;


}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}