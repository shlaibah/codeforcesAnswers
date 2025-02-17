#include <iostream>
using namespace std;

int main() {
    int n,m; cin>>n>>m;

    string s1,s2,s3 = "";
    for (int i = 0; i < m; i++) {
        s1 += "#";
        s2 += ".";
        s3 += ".";
    }
    s2[m-1] = '#';
    s3[0] = '#';

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout<<s1<<"\n";
        } else if ((i/2)%2==0) {
            cout<<s2<<"\n";
        } else {
            cout<<s3<<"\n";
        }
    }  
}