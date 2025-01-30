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
#define pray cout << "Our Father in heaven, hallowed be your name...";

void solve() {
    freopen("lostcow.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("lostcow.out", "w", stdout);
    // Your solution logic goes here

    int x,y;
    cin >> x >> y;
    int dist = 0;
    int index = 0;
    int curr = x;
    if(x == y){
        cout << 0 << endl;
        return;
    }

    while (true) {
        int move = (index % 2 == 0 ? 1 : -1) * (1 << index);
        int prev = curr;
        curr = x + move;
        dist += std::abs(curr - prev);

        if (std::min(prev, curr) <= y && std::max(prev, curr) >= y) {
            dist -= std::abs(curr - y);
            cout << dist << endl;
            return;
        }
        
        index++;
    }
}


int main() {
    // pray
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();

    return 0;
}