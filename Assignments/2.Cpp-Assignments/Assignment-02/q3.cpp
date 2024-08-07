// WAP to display addition, subtraction, multiplication and division of two integers on screen
#include <bits/stdc++.h>
using namespace std;

class Calculation {
    private:
        float num1, num2;
        float add, sub, div, mul;
    
    public:
        void getNum();
        void addition();
        void substraction();
        void multiplication();
        void division();
        
};

Calculation :: getNum() {
    cin >> num1;
    cin >> num2;
}

Calculation :: addition() {
    add = num1 + num2;
    cout << num1 << " + " << num2 << " = " << add << endl;
}

Calculation :: substraction() {
    sub = num1 - num2;
    cout << num1 << " - " << num2 << " = " << sub << endl;
}

Calculation :: multiplication() {
    mul = num1 * num2;
    cout << num1 << " * " << num2 << " = " << mul << endl;
}

Calculation :: division() {
    div = num1 / num2;
    cout << num1 << " / " << num2 << " = " << div<< endl;
}

int main() {
    Calculation calc;
    calc.getNum();
    calc.addition();
    calc.substraction();
    calc.division();
    calc.multiplication();

    return 0;
}