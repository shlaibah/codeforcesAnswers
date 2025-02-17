#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,k; cin>>n>>k;
    vector<int> students(n);

    int counter = 0;

    for (int i = 0; i < n; i++) {
        cin>>students[i];
        if (5 - students[i] >= k) {
            counter++;
        }
    }
    cout<<counter/3<<"\n";
}
