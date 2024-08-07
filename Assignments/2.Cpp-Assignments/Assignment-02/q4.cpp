// WAP to find area of circle. Area of Circle = PI * r * r Where, PI = 3.14 (Using Class and Object)
#include <bits/stdc++.h>
using namespace std;

class Area {
    private:
        int radius;
        int area;
    
    public:
        setRadius() {
            cin >> radius;
        }

        getArea() {
            area = 3.14 * radius * radius;
            cout << "Area: " << area;
        }
};

int main() {
    Area circle;
    circle.setRadius();
    circle.getArea();

    return 0;
}