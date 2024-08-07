// Write a C++ program to calculate area of circle. 
#include <iostream>
using namespace std;

int main() {
    float radius;
    cin >> radius;

    float area = 3.14 * radius * radius;
    cout << "Area of the circle is: " << area;

    return 0;
}