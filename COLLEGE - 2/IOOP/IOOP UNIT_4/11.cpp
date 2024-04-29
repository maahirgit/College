// Create a class name bank and create 3 member function named balance, deposit and
// withdraw and declare all the member function outside the class using scope resolution
// operator.
#include <iostream>

class Bank {
private:
    int account_number;
    double balance_amount;

public:
    Bank(int account_num, double balance) {
        account_number = account_num;
        balance_amount = balance;
    }

    void balance();
    void deposit(double amount);
    void withdraw(double amount);
};

void Bank::balance() {
    std::cout << "Account Balance: $" << balance_amount << std::endl;
}

void Bank::deposit(double amount) {
    balance_amount += amount;
    std::cout << "$" << amount << " deposited. New balance: $" << balance_amount << std::endl;
}

void Bank::withdraw(double amount) {
    if (balance_amount >= amount) {
        balance_amount -= amount;
        std::cout << "$" << amount << " withdrawn. New balance: $" << balance_amount << std::endl;
    }
    else {
        std::cout << "Insufficient balance. Current balance: $" << balance_amount << std::endl;
    }
}

int main() {
    Bank my_account(123456, 1000.0);
    my_account.balance();
    my_account.deposit(500.0);
    my_account.withdraw(200.0);
    my_account.withdraw(1500.0); // Should display error message

    return 0;
}
