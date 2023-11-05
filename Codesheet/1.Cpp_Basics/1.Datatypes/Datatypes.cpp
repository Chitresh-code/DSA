//Datatypes in C++

/*
Datatype : int
Bytes: 4
Minimum Value: -2,147,483,648
Maximum Value: 2,147,483,647
*/

/* 
Datatype: Unsigned int
Bytes: 4
Minimum Value: 0
Maximum Value: 4,294,967,295
*/

/*
Datatype: Unsigned short
Bytes: 2
Minimum Value: 0
Maximum Value: 65,535
*/

/*
Datatype: Unsigned long
Bytes: 8
Minimum Value: 0
Maximum Value: 18,446,744,073,709,551,615
*/

/*
Datatype: Long long
Bytes: 8
Minimum Value: -9,223,372,036,854,775,808
Maximum Value: 9,223,372,036,854,775,807
*/

/*
Datatype: Float
Bytes: 4
Minimum Value: 1.17549e-38
Maximum Value: 3.40282e+38
*/

/*
Datatype: Double
Bytes: 8
Minimum Value: 2.22507e-308
Maximum Value: 1.79769e+308
*/

/*
Datatype: Long double
Bytes: 12
Minimum Value: 3.3621e-4932
Maximum Value: 1.18973e+4932
*/

/*
Datatype: String
Bytes: Depends on the length of the string
*/

/*
Datatype: Getline
Bytes: Depends on the length of the string
*/

/*
Datatype: Char
Bytes: 1
Minimum Value: -128
Maximum Value: 127
*/

/*
Datatype: Bool
Bytes: 1
Minimum Value: 0
Maximum Value: 1
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    // int
    int x = 10; // Declaring and initializing variable x
    //long
    long y = 5000000000;
    // long long
    long long z = 1000000000000000000;
    // short
    short a = 30;
    return 0;
    // float
    float b = 3.14;
    // double
    double c = 3.14159265358979323846;
    // string
    string d = "Hello World!";
    // char
    char e = 'A';
    // getline
    string f;
    getline(cin, f);
    cout << f;
    // bool
    bool g = true;

    return 0;
}
