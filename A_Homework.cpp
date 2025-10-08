#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        vector<char> a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }

        int m; cin>>m;
        vector<char> b(m);
        for (int i = 0; i < m; i++) {
            cin>>b[i];
        }

        char curr;
        for (int i = 0; i < m; i++) {
            cin>>curr;
            if (curr == 'V') {
                a.insert(a.begin(), b[i]);
            } else {
                a.push_back(b[i]);
            }
        }


        string ans;
        for (int i = 0; i < a.size(); i++) {
            ans += a[i];
        }
        
        cout<<ans<<"\n";

    }
}