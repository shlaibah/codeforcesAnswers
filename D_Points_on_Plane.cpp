#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;

    while (t--) {
        long long n; cin>>n;
        long long left = 0, right = 1e9, result = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (mid * mid >= n) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout <<result - 1<< endl;
    }
}