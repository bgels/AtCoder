#include <iostream>
#include <string>
#include <utility>
#include <map>
#include <set>
using namespace std;

void solve() {
    int current = 0;
    pair<int, int> coord = make_pair(0, 0);

    map<int, set<int>> grid;
    grid[coord.first].insert(coord.second);

    bool repeat = false;


    string input;
    while (cin >> input) {
        string dir(1, input[0]);
        int steps = stoi(input.substr(1));

        if (dir == "R") {
            current = (current + 1) % 4;
        } else if (dir == "L") {
            current = (current - 1 + 4) % 4;
        }

        for(int i =0; i<steps; i++){
            if (current == 0) {
                coord.first += 1;
            } else if (current == 1) {
                coord.second += 1;
            } else if (current == 2) {
                coord.first -= 1;
            } else if (current == 3) {
                coord.second -= 1;
            }

            if(grid[coord.first].count(coord.second) > 0 ){
                cout << "FIRST REPEATED DISTANCE: " <<  abs(coord.first) + abs(coord.second);
                return;
            }

            grid[coord.first].insert(coord.second);
        }


    }

    cout << "FINAL LOCATION: " << abs(coord.first) + abs(coord.second);
}

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}

