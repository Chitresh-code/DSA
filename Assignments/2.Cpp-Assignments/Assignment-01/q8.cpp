// Write a C++ program to input marks of five subjects of a student and calculate total marks and percentage. 
#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    cout << "Total of 5 subjects: " << total << endl;

    float per = total / 5;
    cout << "Percentage: " << per << endl;
}