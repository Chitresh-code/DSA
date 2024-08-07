// Write a C++ program to create a class for student to get and print details of a student. Following are the details of a student:
// Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark

// Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student
#include <bits/stdc++.h>
using namespace std;

class Student {
    private:
        int student_id;
        string name, branch;
        float total, per;
        vector<float> marks;

    public:
        void inputDetails();
        void percentage();
        void grade();

};

void Student :: inputDetails() {
    cin >> student_id;
    cin.ignore();
    getline(cin, name);
    getline(cin, branch);
    for(int i = 0;i < 5;i++) {
        float sub;
        cin >> sub;
        marks.push_back(sub);
    }
}

void Student :: percentage() {
    total = 0;
    for(auto i : marks) {
        total += i;
    }
    per = total / 5;

    cout << "Percentage: " << per << endl;
}

void Student :: grade() {
    if (per > 75) {
        cout << "Distinction" << endl;
    }
    else if ((per >= 65) && (per < 75)) {
        cout << "First" << endl;
    }
    else if ((per >= 55) && (per < 65)) {
        cout << "Second" << endl;
    }
    else if ((per >= 45) && (per < 55)) {
        cout << "Pass" << endl;
    } 
    else {
        cout << "Fail" << endl;
    }
}

int main() {
    Student std1;
    std1.inputDetails();
    std1.percentage();
    std1.grade();
}