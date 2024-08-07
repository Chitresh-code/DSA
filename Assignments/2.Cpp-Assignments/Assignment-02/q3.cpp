// WAP to display addition, subtraction, multiplication and division of two integers on screen
#include <bits/stdc++.h>
using namespace std;

class Calculation {
    private:
        float num1, num2;
        float add, sub, div, mul;
    
    public:
        getNum() {
            cin >> num1;
            cin >> num2;
        }

        addition() {
            add = num1 + num2;
            cout << num1 << " + " << num2 << " = " << add << endl;
        }

        substraction() {
            sub = num1 - num2;
            cout << num1 << " - " << num2 << " = " << sub << endl;
        }

        multiplication() {
            mul = num1 * num2;
            cout << num1 << " * " << num2 << " = " << mul << endl;
        }

        division() {
            div = num1 / num2;
            cout << num1 << " / " << num2 << " = " << div<< endl;
        }
};

int main() {
    Calculation calc;
    calc.getNum();
    calc.addition();
    calc.substraction();
    calc.division();
    calc.multiplication();

    return 0;
}