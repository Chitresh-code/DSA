// Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
#include <bits/stdc++.h>
using namespace std;

class Area {
    private:
        float len;
        float br;
        float area;
    
    public:
        void setDim();
        void getArea();
        
};

void Area :: setDim() {
    cin >> len;
    cin >> br;    
}

void Area :: getArea() {
    area = len * br;
    cout << "Area: " << area;
}

int main() {
    Area rectangle;
    rectangle.setDim();
    rectangle.getArea();

    return 0;
}