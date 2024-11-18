#pragma once
#include <iostream>

using std::cout, std::cin, std::string;

void solve() {
    string x; cin>>x;
    if(x[0] == 'P' || x[0] == 'C' || x[0] == 'L' || x[0] == 'A' || x[0] == 'S' || x[0] == 'I'){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();


    return 0;
}