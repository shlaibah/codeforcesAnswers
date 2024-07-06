#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*

Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.

 */


int main() {
    string original, temp;
    // get input
    cin>>original;

    // take out numbers from input
    for (int i = 0; i < original.size(); i++) {
        if (original[i] != '+') {
            temp.push_back(original[i]);
        }
    }

    // sort numbers
    sort(temp.begin(), temp.end());

    // replace sorted numbers with original numbers
    int tempi = 0;
    for (int i = 0; i < original.size(); i++) {
        if (original[i] != '+') {
            original.replace(i, 1, 1,temp[tempi]);
            tempi++;
        }
    }

    cout<<original;
    return 0;
}