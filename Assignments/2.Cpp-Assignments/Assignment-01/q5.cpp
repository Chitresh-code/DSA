// Write a C++ program to find simple interest. 
#include <iostream>
using namespace std;

int main() {
    float p, r, t;
    cin >> p >> r >> t;

    float si = (p * r * t) / 100;
    cout << "The simple interest is: " << si;

    return 0;
}