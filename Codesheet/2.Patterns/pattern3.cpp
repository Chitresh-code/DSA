/*
For an given integer n, print the following pattern: 
1
12
123
1234
12345
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 1;i < n+1;i++) {
        for (int j = 1;j < i+1;j++) {
            cout << j;
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