#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        string s; cin>>s;
        int count = 0;
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                count++;
            } else {
                continue;
            }
        }
        cout << count << "\n";
    }
}