// Implement a class Account. An account has account holder's acc_no as static name, a
// balance, functions to add and withdraw money and a function to query current balance.
// Charge a penalty of Rs. 100 if an attempt is made to withdraw more money than
// available in the account. Also provide the functionality to withdraw and deposit money in
// the account. Use nested function in withdraw function(use switch case)
#include <iostream>

using namespace std;

class Account {
    static int acc_no;
    double balance;

public:
    Account() {
        acc_no++;
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount of Rs. " << amount << " has been deposited.\n";
    }

    void withdraw(double amount) {
        double penalty = 100;
        if (amount > balance) {
            cout << "Insufficient balance. Penalty of Rs. " << penalty << " charged.\n";
            balance -= penalty;
        } else {
            switch (int choice; cout << "Select withdrawal type: (1) Savings (2) Current: ", cin >> choice, choice) {
                case 1:
                    balance -= amount;
                    cout << "Amount of Rs. " << amount << " has been withdrawn from savings account.\n";
                    break;
                case 2:
                    balance -= amount;
                    cout << "Amount of Rs. " << amount << " has been withdrawn from current account.\n";
                    break;
                default:
                    cout << "Invalid choice.\n";
                    break;
            }
        }
    }

    void checkBalance() {
        cout << "Current balance is: " << balance << endl;
    }

    static int getAccNo() {
        return acc_no;
    }
};

int Account::acc_no = 0;

int main() {
    Account a1, a2, a3;

    a1.deposit(5000);
    a1.withdraw(2000);
    a1.checkBalance();

    a2.deposit(10000);
    a2.withdraw(15000);
    a2.checkBalance();

    a3.deposit(2000);
    a3.withdraw(3000);
    a3.checkBalance();

    cout << "Total number of accounts created: " << Account::getAccNo() << endl;

    return 0;
}
