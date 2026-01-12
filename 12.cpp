//Roll No :-  24IT471
//Name :- Aditya Pandya

#include <iostream>
using namespace std;

class StudentInfo {
public:
    int studentRoll;
    string studentName;

    void inputStudent() {
        cout << "Enter Roll No: ";
        cin >> studentRoll;
        cout << "Enter Name: ";
        cin >> studentName;
    }

    void displayStudent() {
        cout << "Roll No   : " << studentRoll << endl;
        cout << "Name      : " << studentName << endl;
    }
};

class ExamScores : public StudentInfo {
public:
    int sub1, sub2, sub3;

    void inputScores() {
        cout << "Enter marks for three subjects:\n";
        cout << "Subject 1: ";
        cin >> sub1;
        cout << "Subject 2: ";
        cin >> sub2;
        cout << "Subject 3: ";
        cin >> sub3;
    }

    void displayScores() {
        cout << "Marks Obtained:\n";
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl;
    }
};

class ResultSheet : public ExamScores {
public:
    int totalMarks;
    float percent;
    string grade;

    void computeResult() {
        totalMarks = sub1 + sub2 + sub3;
        percent = totalMarks / 3.0;

        if (percent >= 75)
            grade = "A";
        else if (percent >= 60)
            grade = "B";
        else if (percent >= 40)
            grade = "C";
        else
            grade = "F";
    }

    void displayResult() {
        cout << "\n--- Student Result ---\n";
        displayStudent();
        displayScores();
        cout << "Total Marks : " << totalMarks << endl;
        cout << "Percentage  : " << percent << "%" << endl;
        cout << "Grade       : " << grade << endl;
    }
};

int main() {
    int numStudents;
    cout << "How many students? ";
    cin >> numStudents;

    ResultSheet records[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student #" << i + 1 << ":\n";
        records[i].inputStudent();
        records[i].inputScores();
        records[i].computeResult();
    }

    cout << "\n=== All Student Results ===\n";
    for (int i = 0; i < numStudents; i++) {
        records[i].displayResult();
    }

    return 0;
}
