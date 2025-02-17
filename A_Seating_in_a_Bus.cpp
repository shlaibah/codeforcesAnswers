#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t; cin>>t;

    while (t--) {
        int n; cin>>n;
        vector<int> seats(n);
        for (int i = 0; i < n; i++) {
            cin >> seats[i];
        }
        bool state;
        for (int i = 0; i < n; i++) {
            if (seats[i] - seats[i+1] != abs(1)) {
                state = false;
            } else {
                state = true;
            }
        }
        if (state == false) {
            cout<<"No"<<"\n";
        } else {
            cout<<"Yes"<<"\n";
        }
    }
}