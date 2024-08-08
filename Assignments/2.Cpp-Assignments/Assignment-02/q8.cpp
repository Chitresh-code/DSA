// C++ program to create a class for Employee to get and display following Employee information:
// Empcode, Basicsalary
// Write Member function to calculate Net salary
// DA=174% of Basic salary
// HRA=10% of Basic salary
// TA=500
// Income tax=5 % of basic salary , if baic salary > 50000
// Income tax=0 , if Basic salary <= 50000
// Netsalary=(basic salary + da + hra + ta) – income tax'
#include <bits/stdc++.h>
using namespace std;

class Employee {
private:    
    int empcode;
    float basic_salary;
    float da, hra, ta = 500, tax = 0;
    float net_salary;

public:
    void getDetails();
    void calcNetSalary();
    void printNetSalary();
};

void Employee :: getDetails() {
    cin >> empcode;
    cin >> basic_salary;
}

void Employee :: calcNetSalary() {
    da = basic_salary * 0.17;
    hra = basic_salary * 0.10;
    if (basic_salary > 50000) {
        tax = basic_salary * 0.05;
    }
    net_salary = (basic_salary + da + hra + ta) - tax;
}

void Employee :: printNetSalary() {
    cout << "Employee Id: " << empcode << endl;
    cout << "Total salary " << net_salary << endl;
}

int main() {
    Employee emp1;
    emp1.getDetails();
    emp1.calcNetSalary();
    emp1.printNetSalary();

    return 0;
}