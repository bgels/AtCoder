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
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::array;
using std::string;
using std::pair;
using std::make_pair;

char spotty[100][100], plain[100][100];


void solve() {

    freopen("cownomics.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("cownomics.out", "w", stdout);
    // Your solution logic goes here
    int N, M; cin >> N >> M;
    for(int i = 0; i<N; i++){
        for(int j = 0; j < M; j++){
            cin >> spotty[i][j];
        }
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j < M; j++){
            cin >> plain[i][j];
        }
    }

    int counter = 0;

    for (int j = 0; j < M; j++) {
        std::set<char> s, n;
        for (int i = 0; i < N; i++) {
            s.insert(spotty[i][j]);
            n.insert(plain[i][j]);
        }

        bool areDisjoint = true;
        for (const char& c : s) {
            if (n.find(c) != n.end()) {
                areDisjoint = false;
                break;
            }
        }

        if (areDisjoint) {
            counter++;
        }
    }
    cout << counter << endl;
}


int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}