#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#include <array>
using std::cout, std::endl, std::cin, std::vector, std::array, std::string, std::pair, std::make_pair;

bool isValid(int a, int b,int c){
    int sides[3] = {a, b, c};
    std::sort(sides, sides + 3);

    return sides[0] + sides[1] > sides[2];
}

void solve() {
    int counter=0;
    string input;


    // HOLY FK LOOL// HOLY FK LOOL// HOLY FK LOOL// HOLY FK LOOL// HOLY FK LOOL

    int ret = 0;
    string a, b, c;
    string a2,b2,c2;
    string a3,b3,c3;
    while (cin >> a >> b >> c >> a2 >> b2 >> c2 >> a3 >> b3 >> c3) {
        int x = std::stoi(a);
        int y = std::stoi(b);
        int z = std::stoi(c);

        int x2 = std::stoi(a2);
        int y2 = std::stoi(b2);
        int z2 = std::stoi(c2);

        int x3 = std::stoi(a3);
        int y3 = std::stoi(b3);
        int z3 = std::stoi(c3);


        if (isValid(x, x2, x3)) {
            ret++;
        }
        if (isValid(y, y2, y3)) {
            ret++;
        }
        if (isValid(z, z2, z3)) {
            ret++;
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