/*
For an given integer n, print the following pattern: 
*
**
***
****
*****
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 1;i < n+1;i++) {
        for (int j = 0;j < i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern(n);

    return 0;
}