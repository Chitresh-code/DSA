#include <bits/stdc++.h>
using namespace std;

// If-else statements

//Wap that takes input of age and prints if you are an adult or not
// int main() {
//     int age;
//     cin >> age;

//     if (age >= 18)
//         cout << "You are an adult" << endl;
//     else
//         cout << "You are not an adult" << endl;
//     // or
//     // if (age >= 18)
//     //     cout << "You are an adult" << endl;
//     // else if (age < 18)
//     //     cout << "You are not an adult" << endl;


//     return 0;
// }

/*
A school has following rules for grading systems:
a. Below 25: F
b. 25 to 44: E
c. 45 to 49: D
d. 50 to 59: C
e. 60 to 79: B
f. 80 to 100: A
Ask the user to enter marks and print the corresponding grade
*/
// int main() {
//     int marks;
//     cin >> marks;

//     if (marks > 0) {
//         if (marks < 25)
//             cout << "Grade F" << endl;
//         else if ((marks >= 25) && (marks <= 44))
//             cout << "Grade E" << endl;
//         else if ((marks >= 45) && (marks <= 49))
//             cout << "Grade D" << endl;
//         else if ((marks >= 50) && (marks <= 59))
//             cout << "Grade C" << endl;
//         else if ((marks >= 60) && (marks <= 79))
//             cout << "Grade B" << endl;
//         else if ((marks >= 80) && (marks <= 100))
//             cout << "Grade A" << endl;
//         else
//             cout << "Marks entered cannot be greater than 100" << endl;
//     }
//     else
//         cout << "Marks entered cannot be negative!" << endl;

//     return 0;

// }

/*
Take age from user and then decide accordingly
1. if age < 18
    print -> not eligible for job
2. if age >= 18
    print -> eligible for job
3. if 55 <= age <= 57
    print -> eligible for job but retirement soon
4. if age > 57
    print -> retirement time
*/
// int main() {
//     int age;
//     cin >> age;

//     if (age < 18) {
//         cout << "Not eligible for job";
//     } else {
//         if ((age > 57)) {
//             cout << "Retirement Time!";
//         } else if (age <= 57) {
//             cout << "Eligible for job";
//             if (age >= 55) {
//                 cout << ", but retirement soon!";
//             }
//         }
//     }

//     return 0;
// }