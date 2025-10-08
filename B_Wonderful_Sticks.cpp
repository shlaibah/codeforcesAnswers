#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> ans(n);

        vector<int> numbers;
        for (int i = 1; i <= n; i++) numbers.push_back(i);

        stack<char> sticks;
        char stick;
        for (int i = 0; i < n - 1; i++) {
            cin >> stick;
            sticks.push(stick);
        }

        for (int i = 0; i < n - 1; i++) {
            if (sticks.top() == '<') {
                int it = min_element(numbers.begin(), numbers.end()) - numbers.begin();
                ans[i] = numbers[it];
                numbers.erase(numbers.begin() + it);
            } else {
                int it = max_element(numbers.begin(), numbers.end()) - numbers.begin();
                ans[i] = numbers[it];
                numbers.erase(numbers.begin() + it);
            }
            sticks.pop();
        }

        ans[n - 1] = numbers[0];

        for (int i = n - 1; i >= 0; i--) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
