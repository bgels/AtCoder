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
    int n; cin>>n;
    int a = 0,b= 0,c= 0,d= 0,temp;

    for(int i =0; i<n; i++){
        cin >> temp;
        if(temp == 1){
            a++;
        }else if(temp == 2){
            b++;
        }else if(temp == 3){
            c++;
        }else{
            d++;
        }
    }

    cout << d + c + (b*2 + std::max(0, a - c) + 3)/4 << endl;

    

}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}