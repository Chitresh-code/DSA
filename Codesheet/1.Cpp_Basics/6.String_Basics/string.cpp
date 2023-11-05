#include<bits/stdc++.h>
using namespace std;

int main() {
    // String Declaration
    string str1 = "Hello World!";
    string str2 = "Good Morning!";
    string str3 = "My name is Chitresh";

    // String Length
    cout << str1.length() << endl; // Prints 12

    // String Size
    cout << str2.size() << endl; // Prints 14

    // Difference between length and size
    // Length and size are same for strings
    // Length is a function and size is a variable

    // String Concatenation
    cout << str1 + " " + str2 << endl; // Prints Hello World! Good Morning!
    
    // String Input
    string str4, str5;
    cin >> str4;
    cin >> str5;

    // String Output
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    // Printing only a part of the string
    cout << str1.substr(0, 5) << endl; // Prints Hello
    cout << str3.substr(11, 8) << endl; // Prints Chitresh

    return 0;
}