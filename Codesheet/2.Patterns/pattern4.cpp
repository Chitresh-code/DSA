/*
For an given integer n, print the following pattern: 
1
22
333
4444
55555
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 1;i < n+1;i++) {
        for (int j = 1;j < i+1;j++) {
            cout << i;
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