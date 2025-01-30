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
    int cows, mins;
    cin >> cows >> mins;
    string dir;
    cin >> dir;

    int ret = 0;
    

    vector<int> myArr;
    for(int i =0; i <cows; i++){
        int x; cin>>x;
        myArr.push_back(x);
    }

    vector<int> v2;

    v2.assign(myArr.begin(), myArr.end());

    while(mins > 0){
        for(int i =0; i <cows; i++){
        if(dir[i] == 'R'){
            v2[i]-=1;
            if(i != cows - 1){
                v2[i+1]+=1;
            }
        }else if(dir[i] == 'L'){
            v2[i]-=1;
            if(i != 0){
                v2[i-1]+=1;
            }
        }
        mins--;
    }
    }

    for (size_t i = 0; i < cows; i++)
    {

        if(v2[i] > myArr[i]){           
            ret += myArr[i];
        }else{
            ret += v2[i];
        }
    }

    cout << ret;
    



}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();

    return 0;
}