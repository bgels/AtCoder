#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using std::cout, std::endl, std::cin, std::array, std::vector, std::string;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string x; cin >> x;
    int ret;
    for(int i =0; i<x.length(); i++){
        if(int(x[i]) > 64 && int(x[i]) < 91){
            ret = i;
        }
    }
    cout << ret + 1;

    return 0;
 }