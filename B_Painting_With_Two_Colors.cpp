#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int n,a,b; cin>>n>>a>>b;

        if (n == a && a == b) {
            cout<<"YES"<<"\n";
        } else if (n == a || n == b) {
            cout<<"NO"<<"\n";
        } else if (a != n-1 && b != n-1) {
            cout<<"YES"<<"\n";
        } else {
            cout<<"NO"<<"\n";
        }
    }
}
