#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t; cin>>t;

    while (t--) {
        int n, k; cin>>n>>k;

        int arr[n];
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int score = 0;
        for (auto& entry : freq) {
            int num = entry.first;
            int count = entry.second;

            int complement = k - num;

            if (freq.find(complement) != freq.end()) {
                if (num == complement) { 
                    score += count / 2;
                } else {
                    int pairs = min(count, freq[complement]);
                    score += pairs;
                    freq[num] -= pairs;
                    freq[complement] -= pairs;
                }
            }
        }

        cout<<score<<endl;
    }
}
