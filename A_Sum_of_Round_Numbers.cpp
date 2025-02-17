#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin>>t;

    while (t--) {
        int num; cin>>num;

        vector<int> roundNums;
        int place = 1;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 0) {
                roundNums.push_back(digit * place);
            }
            num /= 10;
            place *= 10;
        }

        cout<<roundNums.size()<<"\n";
        for (int roundNum : roundNums) {
            cout<<roundNum<<" ";
        }
        cout<<endl;
    }
}
