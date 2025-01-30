#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
#include <iomanip>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

void solve() {
    // kth positive integer that is NOT divisible by n
    // let n = 3 and k = 7
    // 1 2 | 4 5 | 7 8 | 10 11 | 13 14 | 16 17
    // * *   * *   * *   *
    int t; cin>>t;
    for(int i =0; i<t; i++){
        int n, k;
        cin >> n >> k;
        int rem = k%(n-1);
        int ret = (k/(n-1)) * n - 1;
        if(rem > 0){
            ret += 1 + rem;
        }

        cout << ret << endl;

    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}