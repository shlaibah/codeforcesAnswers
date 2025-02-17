#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        long long n, k;
        cin >> n >> k;

        // Special case: k = 1
        if (k == 1) {
            // We need n operations (subtract 1 each time)
            cout << n << "\n";
            continue;
        }

        long long operations = 0;
        // Convert n to base k and sum up all digits
        while (n > 0) {
            operations += (n % k);
            n /= k;
        }

        cout << operations << "\n";
    }

    return 0;
}
