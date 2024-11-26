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
    string input;

    vector<vector<int>> kPad = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    pair<int,int> pos = make_pair(1,1);
    while(cin >> input){
        for(int i = 0; i<input.length(); i++){
            if(input[i] == 'U'){
                pos.first = std::clamp((pos.first - 1), 0 ,2);
                
            }else if(input[i] == 'D'){
                pos.first = std::clamp((pos.first + 1), 0 ,2);

            }else if(input[i] == 'R'){
                pos.second = std::clamp((pos.second + 1), 0 ,2);
                
            }else if(input[i] == 'L'){
                pos.second = std::clamp((pos.second - 1), 0 ,2);
                
            }
        }

        cout << kPad[pos.first][pos.second];

    }
    
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}