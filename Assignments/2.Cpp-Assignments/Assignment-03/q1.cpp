// Write a program to print the area of a rectangle by creating a class named 'Area' having one function. Length and breadth of the rectangle are entered through keyboard using Parameterized constructor.
#include <bits/stdc++.h>
using namespace std;

class Area {
private:
    int length, breadth, area;

public:
    Area(int len, int br) {
        length = len;
        breadth = br;
    }
    void getArea();
};

void Area :: getArea() {
    area = length * breadth;
    cout << "Area: " << area;
}

int main() {
    int len, br;
    cin >> len >> br;
    Area rectangle(len, br);
    rectangle.getArea();
}