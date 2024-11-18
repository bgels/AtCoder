#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

int main() {
    int a, b, c, d, e;
    cin >> a >> b;
    cin >> c;
    for(int i =0; i<b - 1; i++){
        int x; cin>>x;
        c = c * x;
    }
    cin >> d;
    int sum = 0;
    for(int i =0; i<d; i++){
        int x; cin>>x;
        sum+=x;
    }

    cout << (sum + a) * c << endl;
    

    return 0;
}