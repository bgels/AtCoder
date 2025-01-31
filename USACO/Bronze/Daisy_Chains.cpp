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
#define pray cout << "Our Father in heaven, hallowed be your name... (￣^￣ )";
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair, std::set;

int pasture[101];

// https://usaco.org/index.php?page=viewproblem2&cpid=1060

void solve() {
    // Your solution logic goes here
    int N; cin >> N;
    for(int i = 1; i<=N; i++){
        cin >> pasture[i];
        //cout << pasture[i] << endl;
    }

    int counter = 0;

    for(int i = 1; i<=N; i++){
        for(int j = i +1; j<= N; j++){
            double avg = (pasture[i] + pasture[j])/2;
            cout << avg << endl;
            cout << pasture[i] << " " << pasture[j] << endl;
            if(pasture[i] == avg || pasture[j] == avg){
                counter++;
            }
        }
    }

    cout << counter << endl;

}

int main() {
    // pray
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}