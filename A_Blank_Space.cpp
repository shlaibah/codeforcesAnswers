#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin >> n;

        int curr = 0;      
        int best = 0;  
        int num;     
        for (int i = 0; i < n; ++i) {
            cin>>num;
            if (num == 0) {
                curr++;               
            } else {
                best = max(best, curr); 
                curr = 0;             
            }
        }
        best = max(best, curr);

        cout<<best<<'\n';
    }
}
