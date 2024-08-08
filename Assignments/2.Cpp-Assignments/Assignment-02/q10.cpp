// Write a program to read time in hh:mm:ss and display answer in only seconds.
#include<bits/stdc++.h>
using namespace std;

class Seconds {
private:
    int hours, minutes, seconds;

public:
    void input();
    void output();
};

void Seconds :: input() {
   cin >> hours;
   cin >> minutes;
   cin >> seconds; 
}

void Seconds :: output() {
    minutes += hours * 60; 
    seconds += minutes * 60;
    cout << "Seconds: " << seconds;
}

int main() {
    Seconds sec;
    sec.input();
    sec.output();
}
