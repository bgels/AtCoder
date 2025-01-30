#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
#include <cctype>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

void solve() {
    string x;
    cin >> x;
    string ret = "";
    for(char c : x){
        c = tolower(static_cast<char> (c));
        if(string("aoyeui").find(c) == string::npos){
            ret.push_back('.');
            ret.push_back(c);
        }
    }
    cout << ret << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();


    return 0;
}