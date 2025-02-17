#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--){ 
        int num; cin>>num;
        vector<int> values(num);
        for (int i = 0; i < num; i++) {
            cin>>values[i];
        }

        while (values.size() > 1) {
            sort(values.begin(), values.end());

            int x = values[0];
            int y = values[1];

            values.erase(values.begin());
            values.erase(values.begin());

            values.push_back((x + y) / 2);
        }
        cout<<values[0]<<"\n";
    }
}
