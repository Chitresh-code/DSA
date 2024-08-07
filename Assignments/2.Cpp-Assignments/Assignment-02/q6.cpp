// Write a C++ program to demonstrate ATM money withdrawal process by taking following private data members:
// Accountno, balance;

// The withdrawal function should return remaining balance to the user and should deduct withdrawal amount rom balance. If withdrawal amount > balance print appropriate message on screen (Not enough balance)

// The Deposit function should return updated balance to user
#include <bits/stdc++.h>
using namespace std;

class ATM {
    private:
        int account_no;
        float balance = 30000;
        float withdraw;

    public:
        getDetails();
        withdrawal();
};

getDetails() {
    cin >> account_no;
    cin >> withdraw;
}

withdrawal() {
    if (balance < withdraw) {
        cout << "Insufficient balance" << endl;
    }
    else {
        balance -= withdraw;
        cout << "Remaining Balance: " << balance << endl;
    }
}

int main() {
    ATM atm;
    atm.getDetails();
    atm.withdrawal();    
}