// Roll No :- 24IT471
// Name :- Pandya Aditya

#include <iostream>
using namespace std;

class Account {
protected:
    string name;
    int accNumber;
    float balance;
public:
    Account() {
        cout << "Enter account holder name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> accNumber;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void showAccount() {
        cout << "\nAccount Holder: " << name;
        cout << "\nAccount Number: " << accNumber;
        cout << "\nBalance: " << balance << endl;
    }
};

class Savings : virtual public Account {
public:
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited " << amount << ". New Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient funds" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew " << amount << ". New Balance: " << balance << endl;
        }
    }
};

class Current : virtual public Account {
public:
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited " << amount << ". New Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient funds" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew " << amount << ". New Balance: " << balance << endl;
        }
    }
};

class Loan : public Savings, public Current {
    float loanAmount;
    float interestRate;   // default
    int years;
public:
    Loan() : loanAmount(0), interestRate(8.0), years(0) {}

    void LoanEligibility() {
        if (balance >= 1000) {
            cout << "Eligible for loan" << endl;
        } else {
            cout << "Not eligible for loan." << endl;
        }
    }

    void takeLoan() {
        if (balance < 1000) {
            cout << "Not eligible for loan. Maintain minimum balance of 1000." << endl;
            return;
        }

        cout << "Enter loan amount: ";
        cin >> loanAmount;
        cout << "Enter number of years to repay: ";
        cin >> years;

        float simpleInterest = (loanAmount * interestRate * years) / 100.0;
        float totalRepay = loanAmount + simpleInterest;

        float yearlyInstallment = totalRepay / years;
        float monthlyInstallment = totalRepay / (years * 12);

        cout << "\nLoan Details:";
        cout << "\nLoan Amount: " << loanAmount;
        cout << "\nInterest Rate: " << interestRate << "% per annum";
        cout << "\nRepayment Time: " << years << " years";
        cout << "\nSimple Interest: " << simpleInterest;
        cout << "\nTotal Repayment (Principal + Interest): " << totalRepay;
        cout << "\nYearly Installment: " << yearlyInstallment;
        cout << "\nMonthly Installment: " << monthlyInstallment << endl;
    }
};

int main() {
    Loan l;

    l.showAccount();

    int choice;
    float amount;

    cout << "\n1. Deposit into Savings\n2. Withdraw from Savings\n3. Deposit into Current"
         << "\n4. Withdraw from Current\n5. Check Loan Eligibility\n6. Take Loan\n0. Exit\n";

    do {
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount to deposit into Savings: ";
            cin >> amount;
            l.Savings::deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw from Savings: ";
            cin >> amount;
            l.Savings::withdraw(amount);
            break;
        case 3:
            cout << "Enter amount to deposit into Current: ";
            cin >> amount;
            l.Current::deposit(amount);
            break;
        case 4:
            cout << "Enter amount to withdraw from Current: ";
            cin >> amount;
            l.Current::withdraw(amount);
            break;
        case 5:
            l.LoanEligibility();
            break;
        case 6:
            l.takeLoan();
            break;
        case 0:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 0);

    return 0;
}
