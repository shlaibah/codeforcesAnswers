#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int x; cin >> x;

        int k = 0;
        int power = 1;
        while (power * 2 <= x) {
            power *= 2;
            k++;
        }

        int answer = 2 * k + 3;
        cout << answer << "\n";
    }
}
