#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;

        vector<int> orignal(n);
        for (int i = 0; i < n; i++) {
            cin>>orignal[i];
        }

        vector<int> queries(n);
        for (int i = 0; i < n; i++) {
            cin>>queries[i];
        }

        vector<bool> isZero(n, false);
        for (int i = 0; i < n; i++) {
            isZero[queries[i]-1] = true;
        }
    }
}