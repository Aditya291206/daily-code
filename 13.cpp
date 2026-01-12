//Roll No :-  24IT471
//Name :- Aditya Pandya

#include <iostream>
using namespace std;

class PersonInfo {
public:
    string fullName;
    int ageYears;

    void inputPerson() {
        cout << "Enter patient name: ";
        cin >> fullName;
        cout << "Enter age: ";
        cin >> ageYears;
    }

    void showPerson() {
        cout << "Name : " << fullName << endl;
        cout << "Age  : " << ageYears << endl;
    }
};

class PatientInfo : public PersonInfo {
public:
    int id;

    void inputPatient() {
        cout << "Enter patient ID: ";
        cin >> id;
    }

    void showPatient() {
        cout << "Patient ID : " << id << endl;
    }
};

class InpatientInfo : public PatientInfo {
public:
    int numDays;
    float perDayCharge;

    void inputInpatient() {
        cout << "Enter number of days admitted: ";
        cin >> numDays;
        cout << "Enter daily charge: ";
        cin >> perDayCharge;
    }

    void showBill() {
        float totalBill = numDays * perDayCharge;
        cout << "Inpatient Total Bill: " << totalBill << endl;
    }
};

class OutpatientInfo : public PatientInfo {
public:
    float consultFee;

    void inputOutpatient() {
        cout << "Enter consultation fee: ";
        cin >> consultFee;
    }

    void showBill() {
        cout << "Outpatient Bill: " << consultFee << endl;
    }
};

int main() {
    cout << "--- Inpatient Details ---\n";
    InpatientInfo inp;
    inp.inputPerson();
    inp.inputPatient();
    inp.inputInpatient();
    inp.showPerson();
    inp.showPatient();
    inp.showBill();

    cout << "\n--- Outpatient Details ---\n";
    OutpatientInfo outp;
    outp.inputPerson();
    outp.inputPatient();
    outp.inputOutpatient();
    outp.showPerson();
    outp.showPatient();
    outp.showBill();

    return 0;
}

