#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin>>n;
    int ans = 0;

    if (n <= 1) {
        cout<<ans<<"\n";
    } else {
        vector<int> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }

        int best = points[0];
        int worst = points[0];
        for (int i = 0; i < n; i++) {
            if(points[i] > best) {
                ans++;
                best = points[i];
            } else if (points[i] < worst) {
                ans++;
                worst = points[i];
            }
        }
        cout<<ans<<"\n";
    }
}