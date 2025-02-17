#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    string past, curr;
    cin>>past;
    int ans = 1;
    for (int i = 1; i < t; i++) { 
        cin>>curr;
        if(curr != past) {
            ans++;
        }
        past = curr;
    }
    cout<<ans<<"\n";
}