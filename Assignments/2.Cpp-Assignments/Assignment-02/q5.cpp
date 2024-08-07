// Write a C++ program to create a class for student to get and print details of a student. Following are the details of a student:
// Studid, name ,sem, branch
#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        int stdid, sem;
        string name, branch;

    public:
        getDetails() {
            cin >> stdid;
            cin.ignore();
            getline(cin, name);
            cin >> sem;
            cin.ignore();
            getline(cin, branch);
        }

        showDetails() {
            cout << "Student Id: " << stdid << endl;
            cout << "Student Name: " << name << endl;
            cout << "Semester: " << sem << endl;
            cout << "Branch: " << branch << endl;
        }
};

void Student :: getDetails() {
    cin >> stdid;
    cin.ignore();
    getline(cin, name);
    cin >> sem;
    cin.ignore();
    getline(cin, branch);
}

void Student :: showDetails() {
    cout << "Student Id: " << stdid << endl;
    cout << "Student Name: " << name << endl;
    cout << "Semester: " << sem << endl;
    cout << "Branch: " << branch << endl;
}

int main()
{
    Student std1;
    std1.getDetails();
    std1.showDetails();
}
