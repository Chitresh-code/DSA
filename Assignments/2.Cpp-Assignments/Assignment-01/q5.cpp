// Write a C++ program to input three numbers and display its total and average. 
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int total = num1 + num2 + num3;
    int avg = total / 3;

    cout << "Total of three numbers: " << total << endl;
    cout << "Average of three numbers: " << avg << endl;

    return 0;
}