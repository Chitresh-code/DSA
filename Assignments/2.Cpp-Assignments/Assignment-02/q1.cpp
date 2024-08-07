// WAP to print your name, age and city and pin code on screen (Using Class).
#include <bits/stdc++.h>
using namespace std;

class Person {
    private:
        string name;
        int age;
        string city;
        string pin;

    public:
        void inputData() {
            getline(cin, name);
            cin >> age;
            cin.ignore();
            getline(cin, city);
            getline(cin, pin);
        }

        void displayInfo() const {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "City: " << city << endl;
            cout << "Pin Code: " << pin << endl;
        }
};

int main() {
    Person person;
    person.inputData();
    person.displayInfo();

    return 0;
}