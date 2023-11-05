/*
Take the age from the user and then decide:
1. If age < 18,
    print-> not eligible for job
2. If age >= 18,
    print-> eligible for job
3. If age >= 55 and age <= 57,
    print-> eligible for job, but retirement soon
4. If age > 57,
    print-> not eligible for job, retired 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18) {

        if (age < 55) {
            cout << "Eligible for the job";
        }
        else if ((age >= 55) and (age <= 57)) {
            cout << "Eligible for job, but retirement soon";
        }
        else if (age > 57) {
            cout << "Not eligible for the job, retired";
        }
    }
    else {
        cout << "Not eligible for the job";
    }
    
    return 0;
}
