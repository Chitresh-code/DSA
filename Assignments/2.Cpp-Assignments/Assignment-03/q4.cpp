// Create a class “Mobile” with attributes: brand, price, color, width, height. Use constructor to set default values of these attributes. Write function to display details of all attributes
#include<bits/stdc++.h>
using namespace std;

class Mobile {
    private:
        float price, width, height;
        string brand, color;
    
    public:
        Mobile(float p, float w, float h, string b, string c) {
            this->brand = b;
            price = p;
            color = c;
            width = w;
            height = h; 
        }
        void display();
};

void Mobile :: display() {
    cout << "Brand: " << brand << endl;
    cout << "Price: " << price << endl;
    cout << "Color: " << color << endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
}

int main() {
    float price, width, height;
    string brand, color;

    getline(cin, brand);
    
    cin >> price;
    cin.ignore();
    getline(cin, color);
    cin >> width >> height;

    Mobile mob1(price, width, height, brand, color);
    mob1.display();

}