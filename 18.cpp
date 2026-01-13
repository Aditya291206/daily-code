//Roll No :-  24IT471
//Name :- Aditya Pandya

#include <iostream>
using namespace std;

class PersonalDetails {
public:
    string empName;
    int empAge;

    void inputPersonal() {
        cout << "Enter employee name: ";
        cin >> empName;
        cout << "Enter age: ";
        cin >> empAge;
    }

    void showPersonal() {
        cout << "Name: " << empName << endl;
        cout << "Age : " << empAge << endl;
    }
};

class JobDetails {
public:
    double basicSalary;
    double deductionAmount;

    void inputJob() {
        cout << "Enter salary: ";
        cin >> basicSalary;
        cout << "Enter deductions: ";
        cin >> deductionAmount;
    }

    void showJob() {
        cout << "Salary     : " << basicSalary << endl;
        cout << "Deductions : " << deductionAmount << endl;
    }
};

class Employee : public PersonalDetails, public JobDetails {
public:
    void showNetSalary() {
        double netSalary = basicSalary - deductionAmount;
        cout << "Net Salary : " << netSalary << endl;
    }
};

int main() {
    Employee emp;

    cout << "Enter Personal Details"<<endl;;
    emp.inputPersonal();

    cout << "Enter Job Details"<<endl;
    emp.inputJob();

    cout << "Employee Information"<<endl;
    emp.showPersonal();
    emp.showJob();
    emp.showNetSalary();

    return 0;
}
