// WAP to display addition, subtraction, multiplication and division of two integers on screen.
// Declare Class Calculation
// Write Parameterized constructor for initialize num1 and num2
// Write member function for each operation. 
#include<bits/stdc++.h>
using namespace std;

class Calculation {
    private:
        float num1, num2, result;

    public:
        Calculation(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }
        void addition();
        void substraction();
        void multiplication();
        void division();
};

void Calculation :: addition() {
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;
}

void Calculation :: substraction() {
    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;
}

void Calculation :: multiplication() {
    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
}

void Calculation :: division() {
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    Calculation calc(n1, n2);
    int choice;
    while(1){
        cin >> choice;
        switch(choice) {
            case 1:
                calc.addition();
                break;
            case 2:
                calc.substraction();
                break;
            case 3:
                calc.multiplication();
                break;
            case 4:
                calc.division();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid Input!" << endl;
        }
    }
}