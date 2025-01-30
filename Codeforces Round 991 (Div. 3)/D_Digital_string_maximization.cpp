#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
#include <iomanip>
#include <stack>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

void solve() {
    string s;
    cin >> s;
    std::stack<char> st;
    std::stack<int> tmp;

    for(char x : s){
        while(!st.empty() && x > st.top() + 1){
            char top = st.top();
            st.pop();

            tmp.push(top);
            x--;
        }
        st.push(x);

        while(!tmp.empty()){
            char top = tmp.top();
            st.push(top);
            tmp.pop();
        }
    }

    string out = "";
    while(!st.empty()){
        out += st.top();
        st.pop();
    }
    std::reverse(out.begin(), out.end());

    cout << out << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solve();
    }

    return 0;
}