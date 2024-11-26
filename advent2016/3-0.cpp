#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

bool isValid(int a, int b,int c){
    int sides[3] = {a, b, c};
    std::sort(sides, sides + 3);

    return sides[0] + sides[1] > sides[2];
}

void solve() {
    int counter=0;
    string input;

    int ret = 0;
    string a, b, c;
    while (cin >> a >> b >> c) {
        int x = std::stoi(a);
        int y = std::stoi(b);
        int z = std::stoi(c);
        if (isValid(x, y, z)) {
            ret++;
        }
    }


    cout << ret;

}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}