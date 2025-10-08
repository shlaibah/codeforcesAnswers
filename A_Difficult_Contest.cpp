#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'T') {
                ans += s[i];
            }
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != 'T') {
                ans += s[i];
            }
        }
        cout<<ans<<"\n";
    }
}