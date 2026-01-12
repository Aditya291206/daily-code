//Roll No :-  24IT471
//Name :- Aditya Pandya

#include <iostream>
using namespace std;

class Person {
protected:
    string pname;
    int page;

public:
    void inputPerson() {
        cout << "Enter person's name: ";
        cin >> pname;
        cout << "Enter person's age: ";
        cin >> page;
    }

    void showPerson() {
        cout << "Name: " << pname << endl;
        cout << "Age: " << page << endl;
    }
};

class Student : virtual public Person {
protected:
    int s_roll;

public:
    void inputStudent() {
        cout << "Enter student roll no: ";
        cin >> s_roll;
    }

    void showStudent() {
        cout << "Roll No    : " << s_roll << endl;
    }
};

class Faculty : virtual public Person {
protected:
    string dept;

public:
    void inputFaculty() {
        cout << "Enter faculty department: ";
        cin >> dept;
    }

    void showFaculty() {
        cout << "Department : " << dept << endl;
    }
};

class TeachingAssistant : public Student, public Faculty {
public:
    void inputTA() {
        cout << "\n--- Enter Teaching Assistant Information ---\n";
        inputPerson();
        inputStudent();
        inputFaculty();
    }

    void showTA() {
        cout << "\n--- Teaching Assistant Information ---\n";
        showPerson();
        showStudent();
        showFaculty();
    }
};

int main() {
    TeachingAssistant ta;

    ta.inputTA();
    ta.showTA();

    return 0;
}
