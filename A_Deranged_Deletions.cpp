#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
        int k; cin>>k;
        vector<int> arr(k);
        for (int i = 0; i < k; i++) {
            cin>>arr[i];
        }

        bool done = false;
        while (!done) {
            if (arr.empty()) {
                cout<<"NO"<<"\n";
                break;
            }

            vector<int> sortedArr = arr;
            sort(sortedArr.begin(), sortedArr.end());

            bool erased = false;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == sortedArr[i]) {
                    arr.erase(arr.begin() + i);
                    erased = true;
                    break;
                }
            }

            if (!erased) {
                cout<<"YES"<<"\n";
                cout<<arr.size()<<"\n";
                for (int i = 0; i < arr.size(); i++) {
                    cout<<arr[i]<< " ";
                }
                cout << "\n";
                done = true;
            }
        }



    }
}