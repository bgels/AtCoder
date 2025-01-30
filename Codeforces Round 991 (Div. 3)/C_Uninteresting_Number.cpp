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
void solve() {
    // mad confusing
    int t; cin >> t;
    for(int i =0; i<t; i++){
        long long n; cin >> n;
        long long sum = 0;
        int num2 = 0, num3 = 0;
        while(n > 0){
            int val = n%10;
            if(val == 2){
                num2++;
            }if(val == 3){
                num3++;
            }
            sum += val;
            n/=10;
        }
        if(sum%9 == 0){
            cout << "YES" << endl;
        }else{
            int rem = 9 - sum%9;
            if (rem == 0 || 
                (rem == 2 && num2 >= 1) || 
                (rem == 4 && num2 >= 2) || 
                (rem == 6 && num3 >= 1) || 
                (rem == 8 && (num2 >= 4 || (num2 >= 1 && num3 >= 1)) ) ) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
                    cout << sum << " " << rem << endl;
        }
    }
    
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}