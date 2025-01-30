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

int road[100], bessie[100];
void solve() {
    freopen("speeding.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("speeding.out", "w", stdout);
    // Your solution logic goes here
    int N, M;
    cin >> N >> M;


    int ptr = 0;
    for(int i = 0; i<N; i++){
        int seg, lim;
        cin >> seg >> lim;
        for(int j = 0; j < seg; j++){
            road[ptr] = lim;
            ptr++;
        }
    }

    ptr = 0;
    for(int i = 0; i < M; i++){
        int seg, lim;
        cin >> seg >> lim;
        for(int j = 0; j < seg; j++){
            bessie[ptr] = lim;
            ptr++;
        }
    }

    int biggest = 0;
    for(int i = 0; i < 100; i++){
        if(bessie[i] > road[100]){
            biggest = std::max(biggest, bessie[i] - road[i]);
        }
    }

    cout << biggest << endl;

}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}