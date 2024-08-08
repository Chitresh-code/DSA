/*
Write a C++ program to demonstrate ATM money withdrawal and deposit process by taking following private data members:
Accountno, balance;
Account no and balance data member initialize using parameterized constructor
Write three function 1. Deposit 2. Withdraw 3. Balance

Write menu driven choice
1. Deposit
2. Withdraw
3. Balance
4. Exit
Program stop execution when user enter choice
*/
#include<bits/stdc++.h>
using namespace std;

class ATM {
    private:
        int acc_no, balance, amount;
    
    public:
        ATM(int acc, int bal) {
            acc_no = acc;
            balance = bal;
        }
        void deposit();
        void withdraw();
        void currentBalance();
};

void ATM :: deposit() {
    balance += amount;
    cout << "Account No: " << acc_no << endl;
    cout << "Money deposited successfully !!" << endl;
    cout << "Updated Balance: " << balance << endl;
}

void ATM :: withdraw() {
    balance -= amount;
    cout << "Account No: " << acc_no << endl;
    cout << "Money debited successfully !!" << endl;
    cout << "Updated Balance: " << balance << endl;
}

void ATM :: currentBalance() {
    cout << "Account No: " << acc_no << endl;
    cout << "Updated Balance: " << balance << endl;
}

int main() {
    int acc_no, bal;
    cin >> acc_no >> bal;
    ATM obj(acc_no, bal);

    while(1) {
        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            obj.deposit();
            break;
        
        case 1:
            obj.deposit();
            break;
            
        case 1:
            obj.deposit();
            break;
            
        case 1:
            obj.deposit();
            break;

        default:
            break;
        }
    }
}