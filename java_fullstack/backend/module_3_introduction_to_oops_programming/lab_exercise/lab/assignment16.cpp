//Class for Bank Account

#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else {
            balance = 0;
            cout << "Initial balance can't be negative. Setting balance to 0." << endl;
        }
    }

    // Function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount or insufficient balance!" << endl;
        }
    }

    // Function to display balance
    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(500.0);  

    account.showBalance();
    account.deposit(200.0);      
    account.withdraw(100.0);     
    account.withdraw(1000.0);    
    account.showBalance();

}

