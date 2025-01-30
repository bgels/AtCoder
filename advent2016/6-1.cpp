#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

vector<string> inLs;

void solve() {
    string input;

    // Read input lines
    while (cin >> input) {

        inLs.push_back(input);

    }

    for(int i = 0; i < 8; i++){
        std::map<char, int> check;
        for(int j = 0; j < inLs.size(); j++){
            check[inLs[j][i]]++;
        }

        int min = INT_MAX;
        char biggest;
        for(const auto& [key, val]: check){
            if(val < min){
                min = val;
                biggest = key;
            }
        }
        cout << biggest;
    }
}

int main() {
    solve();
    return 0;
}
