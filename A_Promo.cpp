#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q; cin>>n>>q;
    
    vector<long long> prices(n);
    for (int i = 0; i < n; i++) {
        cin>>prices[i];
    }

    sort(prices.begin(), prices.end(), greater<long long>());
    
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + prices[i - 1];
    }
    
    while(q--) {
        int x, y; cin>>x>>y;

        long long free = prefix[x] - prefix[x - y];
        cout<<free<<"\n";
    }
}
