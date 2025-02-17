#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;

    while (t--) {
        int val;cin>>val;

        int counter = 0;
        int it = 0;

        while (counter < val) {
            it++;
            if (it % 3 != 0 && it % 10 != 3) {
                counter++;
            }
        }
        cout<<it<<"\n";
    }
}