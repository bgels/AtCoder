#pragma once
#include <iostream> 
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
using std::cout, std::endl, std::cin, std::array, std::vector, std::string, std::pair, std::make_pair, std::set;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<pair<int,int>> mySet;
    int x; cin >> x;
    pair<int,int> coords = make_pair(0,0);
    mySet.insert(coords);
    bool ret = false;
    for(int i = 0; i < x; i++){
        char direction; cin >> direction;
        switch (direction){
            case 'R':
                coords = make_pair(coords.first + 1, coords.second);
                break;
            case 'L':
                coords = make_pair(coords.first - 1, coords.second);
                break;
            case 'U':
                coords = make_pair(coords.first, coords.second + 1);
                break;
            case 'D':
                coords = make_pair(coords.first, coords.second - 1);
                break;
            default:
                continue;
        }
        auto pos = mySet.find(coords);
        if(pos != mySet.end()){
            ret = true;
        } else {
            mySet.insert(coords);
            
        }
    }

    if(ret){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}