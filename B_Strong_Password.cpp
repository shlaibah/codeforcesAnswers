#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int t; cin>>t;
    while (t--) {
        string pass; cin>>pass;
        if (pass.length() == 1) {
            char randomChar;
            do {
                randomChar = 'a' + rand() % 26;
            } while (randomChar == pass[0]);
        } else {
            for (int i = 0; i < pass.length() - 1; i++) {
                if (pass[i] == pass[i + 1]) {
                    char randomChar;
                    do {
                    randomChar = 'a' + rand() % 26;
                    } while (randomChar == pass[i]);
                    pass.insert(i + 1, 1, randomChar); 
                    i++;
                    break;
                }
            }
        }
        cout<<pass<<"\n";
    }
}