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
    long long x;
    cin >> x; 
    long long even_sum = 0, odd_sum = 0;
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < x; i++) {
        int a;
        cin >> a;
        if (i % 2 == 0) { 
            even_sum += a;
            even_count++;
        } else { 
            odd_sum += a;
            odd_count++;
        } 
    }
    double eAvg = static_cast<double>(even_sum) / even_count;
    double oAvg = static_cast<double>(odd_sum) / odd_count;

    if((floor(eAvg) == ceil(eAvg) && floor(oAvg) == ceil(oAvg)) && eAvg == oAvg){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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
