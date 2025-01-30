#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
#include <iomanip>
#include <set>

using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair, std::set;

array<set<int>, 26> cow;

void solve() {
    string x;
    cin >> x;

    for (int i = 0; i < x.length(); i++) {
        cow[x[i] - 'A'].insert(i);
    }

    for (int i = 0; i < 26; i++) {
        if (!cow[i].empty()) {
            cout << "Cow " << i << ": ";
            for (int pos : cow[i]) {
                cout << pos << " ";
            }
            cout << endl;
        }
    }

    int counter = 0;
    // complete the iterator and comparison conditions
    // x1 < y1 < x2 < y2
    // y1 < x1 < y2 < x2
    // https://usaco.org/index.php?page=viewproblem2&cpid=712

    // GOODLUCK !!! :)))
    for(int i =0; i<26; i++){
        auto it = 
        for(int j = i + 1; j<26; j++){

        }
        
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
