#include <iostream>
#include <set>
using namespace std;

int main() {
    int num;
    cin>>num;

    set<int> levels;
    int pnum;
    cin>>pnum;
    int p;
    while(pnum--) {
        cin>>p;
        levels.insert(p);
    }

    int qnum;
    cin>>qnum;
    int q;
    while(qnum--){
        cin>>q;
        levels.insert(q);
    }
    if (levels.size() == num) {
        cout<<"I become the guy."<<"\n";
    } else {
        cout<<"Oh, my keyboard!"<<"\n";
    }


}