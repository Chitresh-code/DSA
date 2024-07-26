#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    int emp_id, hours, salary;

    scanf("%d %d %d", &emp_id, &hours, &salary);

    float total_salary = hours * salary;
    printf("Employee ID: %d\n", emp_id);
    printf("Salary: %.2f", total_salary);
}