#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

struct vectors{
    int x = 0;
    int y = 0;
    int z = 0;
};

void solve() {
    int x = 0;
    int y = 0;
    int z = 0;
    int n;
    cin >> n;
    for(int i =0; i< n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        x+=a;
        y+=b;
        z+=c;
    }
    cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO");
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();

    return 0;
}