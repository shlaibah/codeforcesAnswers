#include <iostream>
using namespace std;

int main() { 
    int t; cin>>t;
    for (int i = 1; i <= t; i++) {
        if (i % 2 != 0) {
            cout<<" I hate";
        } else {
            cout<<" I love";
        }
        if (i != t) {
            cout<<" that";
        }
    }
    cout<<" it"<<endl;
}