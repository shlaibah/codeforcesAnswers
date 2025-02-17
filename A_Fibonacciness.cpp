#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        int a31 = a4 - a2;
        int a32 = a5- a4;
        int a33 = a1 + a2;
        int ans= 0;

        int count = 0;
        if (a1 + a2 == a31) count++;
        if (a2 + a31 == a4) count++;
        if (a31 + a4 == a5) count++;
        ans = max(ans, count);

        count = 0;
        if (a1 + a2 == a32) count++;
        if (a2 + a32 == a4) count++;
        if (a32 + a4 == a5) count++;
        ans = max(ans, count);

        count = 0;
        if (a1 + a2 == a33) count++;
        if (a2 + a33 == a4) count++;
        if (a33 + a4 == a5) count++;
        ans = max(ans, count);

        cout<<ans<<"\n";
    }

    return 0;
}
