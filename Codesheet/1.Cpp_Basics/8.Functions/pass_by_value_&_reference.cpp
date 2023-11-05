// Pass by Value and Reference
// Pass by Value: The function parameter values are copied to another location in memory
// and the original values are not changed.
// Pass by Reference: The function parameter values are not copied to another location in memory
// and the original values are changed.

#include<bits/stdc++.h>
using namespace std;

// Pass by Value
void increment(int a) {
    a++;
    cout << "Inside function: " << a << endl;
}

// Pass by Reference
void increment2(int &a) {
    a++;
    cout << "Inside function: " << a << endl;
}

int main() {
    int a = 10;

    // Pass by Value
    cout << "Before function: " << a << endl;
    increment(a);
    cout << "After function: " << a << endl << endl;

    // Pass by Reference
    cout << "Before function: " << a << endl; 
    increment2(a);
    cout << "After function: " << a << endl;

    return 0;
}