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
    int n, m, a;
    cin >> n >> m >> a;
    cout << static_cast<long long>(std::ceil(n * 1.0 / a)) * static_cast<long long>(std::ceil(m * 1.0 / a)) << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();

    return 0;
}