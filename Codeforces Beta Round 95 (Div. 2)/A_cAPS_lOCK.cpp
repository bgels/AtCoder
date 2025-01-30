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
    // Your solution logic goes here
    string s; cin >> s;
    string ret;
    if(islower(s[0])){
        ret+=toupper(s[0]);
    }else{
        ret+=tolower(s[0]);
    }
    if(std::all_of(s.begin() + 1, s.end(), [](char i){return isupper(i);})) {
        for(size_t i = 1; i < s.size(); i++){
            ret+=tolower(s[i]);
        }
    }else{
        cout << s;
        return;
    }

    cout << ret;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();


    return 0;
}