#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int n,k; cin>>n>>k;
        int ans = 0;

        vector<int> days(n);
        for (int i = 0; i < n; i++) {
            cin>>days[i];
        }

        int i = 0;
        int run = 0;
        while (i < n) {
            if (days[i] == 1) {
                run = 0;
                i++;
                continue;
            }
            run++;
            if (run == k) {
                ans++;
                run = 0;
                i++;
                if (i < n) {
                    i++;
                }
            } else {
                i++;
            }


        }
        cout<<ans<<"\n";
    }
}



/* the mathy solution that you were supposed to notice

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,k;
    cin >> n >> k;
    int a[n + 1];
    for(int i = 1;i <= n;i++) cin >> a[i];
    int ans = 0;
    int cnt = 0;
    for(int i = 1;i <= n;i++) {
      if(a[i] == 1) {
        ans+=(cnt + 1)/(k + 1);
        cnt = 0;
        continue;
      }
      else {
        cnt++;
      }
    }
    ans+=(cnt + 1)/(k + 1);
    cout << ans << endl;
  }
    */