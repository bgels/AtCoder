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

    vector<vector<char>> kPad = {
        {'.', '.', '1', '.', '.'},
        {'.', '2', '3', '4', '.'},
        {'5', '6', '7', '8', '9'},
        {'.', 'A', 'B', 'C', '.'},
        {'.', '.', 'D', '.', '.'},
    };

    pair<int, int> pos = make_pair(2, 0);
    while (cin >> input) {
        for (int i = 0; i < input.length(); i++) {
            if  (input[i] == 'U' && pos.first > 0 && kPad[pos.first - 1][pos.second] != '.') {
                pos.first = pos.first - 1;

            } else if  (input[i] == 'D' && pos.first < 4 && kPad[pos.first + 1][pos.second] != '.') {
                pos.first = pos.first + 1;
            } else if (input[i] == 'R' && pos.second < 4 && kPad[pos.first][pos.second + 1] != '.') {
                pos.second = pos.second + 1;
                
            } else if (input[i] == 'L' && pos.second > 0 && kPad[pos.first][pos.second - 1] != '.') {
                pos.second = pos.second - 1;
            }
        }

        cout << kPad[pos.first][pos.second];
    }

    cout << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}