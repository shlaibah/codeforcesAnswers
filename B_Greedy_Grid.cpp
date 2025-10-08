#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (n >= 3 && m >= 3) {
            cout << "yEs"<<"\n";
        } else{
            cout << "nO"<<"\n";
        } 
    }
}