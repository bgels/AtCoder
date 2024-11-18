#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cctype>
#include <cmath>
using std::cout, std::endl, std::cin, std::array, std::vector, std::string, std::pair, std::make_pair, std::set;


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b; cin >> a >> b;

    int hours = std::stoi(b.substr(0,2)) - std::stoi(a.substr(0,2));
    int mins = std::stoi(b.substr(3,5)) - std::stoi(a.substr(3,5));

    int total = ((hours * 60)/2) + (mins/2);
    
    string ret = "";

    if(std::stoi(a.substr(0,2))  < 9){
        ret += "0" + std::to_string(total/60);
    }else{
        ret += std::to_string(total/60);
    }


    cout << ret;

    return 0;
 }