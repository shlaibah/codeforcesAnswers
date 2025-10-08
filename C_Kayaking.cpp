#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> weights;

    for (int i = 0; i < weights.size(); i++) {
        cin>>weights[i];
    }

    sort(weights.begin(), weights.end());

    int max = weights[weights.size() - 3];

    int ans = max - weights[0];

    cout<<ans<<endl;
}