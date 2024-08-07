// Write a C++ program to enter Day Temperature of 5 cities of Gujarat. Display average temperature. 
#include <iostream>
using namespace std;

int main() {
    float temp1, temp2, temp3, temp4, temp5;
    cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5;
    
    float avg = (temp1 + temp2 + temp3 + temp4 + temp5) / 5;
    cout << "Average temp of 5 cities of gujrat: " << avg;

    return 0;
}