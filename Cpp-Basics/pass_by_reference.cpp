#include <bits/stdc++.h>
using namespace std;

//pass by value -> copy of the orignal is made in the function
int sumOfNums(int a, int b) {
    return a + b;
}

//pass by reference -> the orignal is sent to the function
int diffOfNums(int &a, int &b) {
    return a - b;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int addRes = sumOfNums(num1, num2);
    int diffRes = diffOfNums(num1, num2);
    cout << "Sum: " << addRes << endl;
    cout << "Difference: " << diffRes << endl;

    return 0;
}