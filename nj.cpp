 #include <iostream>
using namespace std;

int main() {
    unsigned long long n; cin >> n;
    for (unsignedlong long i = 1; i <= n; i++) {
        int j = 0;
        if(i % 3 == 0) {
            cout << "Fizz";
            j++;
        }
        if(i%5==0){
            cout << "Buzz";
            j++;
        }
        if (j == 0) {
            cout << i;
        }
        cout << '\n';
    }
}