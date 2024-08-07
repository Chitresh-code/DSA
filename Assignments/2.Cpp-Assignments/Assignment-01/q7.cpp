// Write a C++ program to read two numbers from user and print their addition, subtraction, multiplication and division on screen. 
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cin >> num1 >> num2;

    float add = num1 + num2;
    cout << num1 << " + " << num2 << " = " << add << endl;
    
    float sub = num1 - num2;
    cout << num1 << " - " << num2 << " = " << sub << endl;
    
    float mul = num1 * num2;
    cout << num1 << " * " << num2 << " = " << mul << endl;
    
    float div = num1 / num2;
    cout << num1 << " / " << num2 << " = " << div << endl;

    return 0;
}