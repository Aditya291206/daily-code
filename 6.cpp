//Name: Aditya Pandya
//ID: 24IT471

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Account;

class Transaction {
public:
    friend void transferMoney(Account &from, Account &to, double amount);
};

class Account {
private:
    string name;
    double balance;

public:
    Account() {
        name = "";
        balance = 0.0;
    }

    void inputDetails() {
        cout << "Enter account holder name: ";
        cin >> name;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Account Holder: " << name << "Balance:" << fixed << setprecision(2) << balance << endl;
    }

    friend void transferMoney(Account &from, Account &to, double amount);
};

void transferMoney(Account &from, Account &to, double amount) {
    if (amount > from.balance) {
        cout << "Transfer failed: Insufficient funds in " << from.name << "'s account." << endl;
    } else {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transfer successful: $" << fixed << setprecision(2) << amount
             << " transferred from " << from.name
             << " to " << to.name << endl;
    }
}

int main() {
    Account acc1, acc2;

    cout << "Enter details for first account:\n";
    acc1.inputDetails();

    cout << "\nEnter details for second account:\n";
    acc2.inputDetails();

    cout << "\nInitial Balances:\n";
    acc1.display();
    acc2.display();

    int choice;
    double amount;

    cout << "\nChoose transfer direction:\n";
    cout << "1. Account 1 → Account 2\n";
    cout << "2. Account 2 → Account 1\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    cout << "Enter amount to transfer: ";
    cin >> amount;

    if (choice == 1) {
        transferMoney(acc1, acc2, amount);
    } else if (choice == 2) {
        transferMoney(acc2, acc1, amount);
    } else {
        cout << "Invalid choice!" << endl;
    }

    cout << "\nUpdated Balances:\n";
    acc1.display();
    acc2.display();

    return 0;
}
