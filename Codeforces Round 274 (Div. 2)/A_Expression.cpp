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
    int a,b,c;
    cin >> a >> b >> c;

    vector<int> myArr = {
        a + b + c,
        a * b * c,
        (a + b) * c,
        a * (b + c),
        (a * b) + c,
        a + (b * c)
    };

    cout << *std::max_element(myArr.begin(), myArr.end()) << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}