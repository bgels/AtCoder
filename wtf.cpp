#include <iostream>
#include <string>
#include <utility>
using namespace std;

void solve() {
    int current = 0;
    pair<int, int> coord = make_pair(0, 0);
    
    string input;
    while (cin >> input) {
        string dir(1, input[0]);
        int steps = stoi(input.substr(1));

        if (dir == "R") {
            current = (current + 1) % 4;
        } else if (dir == "L") {
            current = (current - 1 + 4) % 4;
        }

        if (current == 0) {
            coord.first += steps;
        } else if (current == 1) {
            coord.second += steps;
        } else if (current == 2) {
            coord.first -= steps;
        } else if (current == 3) {
            coord.second -= steps;
        }
    }

    cout << abs(coord.first) + abs(coord.second);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}

