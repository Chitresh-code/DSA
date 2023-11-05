/*
Theory on Functions:
Functions are used to divide a big task into small tasks.
Functions are used to make code more readable and reusable.
Functions are used to reduce the complexity of the code.

Types of Functions:
1. Built-in Functions: These are the functions which are already defined in the language.
2. User-defined Functions: These are the functions which are defined by the user.

Types of User-defined Functions:
1. Function with no arguments and no return value.
2. Function with arguments and no return value.
3. Function with no arguments and return value.
4. Function with arguments and return value.

Syntax of a function:
return_type function_name (argument1, argument2, ...) {
    // Code to be executed
    return value;
}

return_type: It is the type of value returned by the function.

Types of return_type:
1. void: It is used when the function does not return any value.
2. int: It is used when the function returns an integer value.
3. float: It is used when the function returns a floating-point value.
4. double: It is used when the function returns a double value.
5. char: It is used when the function returns a character value.
6. bool: It is used when the function returns a boolean value.

Most basic function:
It is used in every C++ program.

int main() {
    // Code to be executed
    return 0;
} 
It is the main function of the program. It is the entry point of the program.

Parameters and Arguments:
Parameters are the variables used in the function declaration.
Arguments are the values passed to the function.
*/

#include<bits/stdc++.h>
using namespace std;

// Function with no arguments and no return value.
void printName(string name) {
    cout << "Hello " << name << endl;
}

// Function with arguments and no return value.
void printSum(int a, int b) {
    cout << "Sum is " << a + b << endl;
}

// Function with no arguments and return value.
int getSum() {
    int a, b;
    cin >> a >> b;
    return a + b;
}

// Function with arguments and return value.
int getSum2(int a, int b) {
    return a + b;
}


int main() {
    // Function with no arguments and no return value.
    string your_name;
    cin >> your_name;
    printName(your_name);

    // Function with arguments and no return value.
    int a, b;
    cin >> a >> b;
    printSum(a, b);

    // Function with no arguments and return value.
    int sum = getSum();
    cout << "Sum is " << sum << endl;

    // Function with arguments and return value.
    int c, d;
    cin >> c >> d;
    int sum2 = getSum2(c, d);
    cout << "Sum is " << sum2 << endl;

    return 0;
}