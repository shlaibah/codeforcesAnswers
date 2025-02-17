#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin>>t;
    
    while (t--) {
        int x1,x2,x3; cin>>x1>>x2>>x3;

        int arr[3] = {x1, x2, x3};
        sort(arr, arr + 3);

        int oe = arr[1];
        int ans = abs(arr[0] - oe) + abs(arr[1] - oe) + abs(arr[2] - oe);   
        cout<<ans<<endl;
    }
}
