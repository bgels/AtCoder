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
    int n, m, a, b;
    // check if m ticket/cost is better deal than regular 1 ride a ticket cost
    // if yes then get cost of n%m floored
    // for the last few tickets check if a*tickets is less than b, if so then just add a*ticket else add b again
    cin >> n >> m >> a >> b;

    int cost = 0;

    if(b*1.0/m < a){
        cost += (n/m) * b;
        if(n%m > 0){
            cost += std::min(n%m * a, b);
        }
    }else{
        cost = a * n;
    }

    cout << cost << endl;


}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}