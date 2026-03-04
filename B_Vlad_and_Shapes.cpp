#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
            string num; cin >> num;
            grid[i] = num;
    }

    if (n == 2) {
        cout<<"SQUARE"<<"\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (grid[i][j + 1] == '0' && grid[i][j] == '1' && grid[i][j - 1] == '0') {
                cout<<"TRIANGLE"<<"\n";
                return;
            }
        }
    }

    for (int i = grid.size() - 1; i >= 0; i--) {
        for (int j = 1; j < n - 1; j++) {
            if (grid[i][j - 1] == '0' && grid[i][j] == '1' && grid[i][j + 1] == '0') {
                cout<<"TRIANGLE"<<"\n";
                return;
            }
        }
    }

    cout<<"SQUARE"<<"\n";

}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
}