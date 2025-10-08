#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        int ans = 0;
        ans = (n * n) / 4 + 1;
        cout<<ans<<"\n";
    }
}