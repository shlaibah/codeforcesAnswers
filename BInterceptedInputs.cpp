#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    while (n--){
        int num; cin>>num;

        int arr[num];
        int e;
        for (int i = 0; i<num;i++) {
            cin>>e;
            arr[i] = e;
        }

        for (int i = 0; i < num; i++) {
            if ((num-2)%arr[i] == 0) {
                int checkThis = (num-2)/arr[i];
                if (find(arr, arr+i, checkThis) != arr+i) {
                    cout<<arr[i]<<" "<<checkThis<<"\n";
                    break;
                }
            }
        }
    }
}