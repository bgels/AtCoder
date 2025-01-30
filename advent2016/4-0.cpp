#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

void processString(const string& input, string& content, string& bracketContent) {
    content = "";
    bracketContent = "";

    bool inBracket = false;

    for (char c : input) {
        if (c == '-') {
            continue;
        } else if (isdigit(c)) {
            continue;
        } else if (c == '[') {
            inBracket = true;
        } else if (c == ']') {
            inBracket = false;
        } else if (inBracket) {
            bracketContent += c;
        } else {
            content += c;
        }
    }
}

void solve() {
    string input;
    while(cin >> input){
        string x, target;

        processString(input, x, target);
        for(int i =0; i<target.length();i++){
            int count = std::count(x.begin(), x.end(), target[0]);
        }

    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }

    return 0;
}