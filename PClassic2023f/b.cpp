
#include <iostream>
using std::cout, std::endl, std::cin;

void solve() {
    int a, b; cin >> a >> b;
    int sum = a + b;
    int x = 0;
    int y = 0;
    while(a > 0){
        a/=10;
        x++;
    }
    while(sum > 0){
        sum/= 10;
        y++;
    }

    if(y > x){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
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