#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    int m,c;
    int mTotal = 0;
    int cTotal = 0;
    while (t--) {
        cin>>m>>c;
        if (m > c) {
            mTotal++;
        } else if (m < c) {
            cTotal++;
        }
    }
    if (mTotal > cTotal) {
        cout<<"Mishka"<<"\n";
    } else if (mTotal < cTotal) {
        cout<<"Chris"<<"\n";
    } else {
        cout<<"Friendship is magic!^^"<<'\n';
    }
}