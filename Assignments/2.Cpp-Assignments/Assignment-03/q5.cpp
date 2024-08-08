// Create a class “Mobile” with attributes: brand, price, color. Enter detail of five different mobile. (Using Array of object).
// Display total number of mobile having price greater than 5000.
// Display Brand, Price and color for all mobiles for price range 1000 to 10000
#include<bits/stdc++.h>
using namespace std;

class Mobile {
    private:
        float price;
        string brand, color;
    
    public:
        Mobile(float p, string b, string c) {
            brand = b;
            price = p;
            color = c;
        }
        void display();
        float getPrice();
};

void Mobile :: display() {
    cout << "Brand: " << brand << endl;
    cout << "Price: " << price << endl;
    cout << "Color: " << color << endl;
}

float Mobile :: getPrice() {
    return price;
}

int main() {
    vector<Mobile> mob;
    float price;
    string brand, color;

    for (int i = 0; i < 5; ++i) {
        getline(cin, brand);
        cin >> price;
        cin.ignore();
        getline(cin, color);
        mob.push_back(Mobile(price, brand, color));
    }

    int count = 0;
    for (auto &i : mob) {
        if (i.getPrice() > 5000) {
            count++;
        }
    }
    cout << "Total mobiles having price greater than 5000: " << count << endl;

    cout << "Mobiles in the price range of 1000 to 10000:" << endl;
    for (auto &i : mob) {
        if (i.getPrice() >= 1000 && i.getPrice() <= 10000) {
            i.display();
            cout << endl;
        }
    }

    return 0;
}