//Program that takes age as input and tells if you are an adult or not (18+)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age >= 18) { 
        cout << "You are an adult";
    }
    else {
        cout << "You are not an adult";
    }
    return 0;
}
