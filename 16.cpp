//Roll No :-  24IT471
//Name :- Pandya Aditya

#include <iostream>
using namespace std;

class UniversityInfo {
public:
    string name;

    void inputUniversity() {
        cout << "Enter university name: ";
        cin >> name;
    }

    void showUniversity() {
        cout << "University: " << name << endl;
    }
};

class CollegeInfo : public UniversityInfo {
public:
    string collegeName;

    void inputCollege() {
        cout << "Enter college name: ";
        cin >> collegeName;
    }

    void showCollege() {
        cout << "College: " << collegeName << endl;
    }
};

class DepartmentInfo : public UniversityInfo {
public:
    string deptName;

    void inputDepartment() {
        cout << "Enter department name: ";
        cin >> deptName;
    }

    void showDepartment() {
        cout << "Department: " << deptName << endl;
    }
};

class FacultyInfo : public UniversityInfo {
public:
    string facultyName;
    string designation;

    void inputFaculty() {
        cout << "Enter faculty name: ";
        cin >> facultyName;
        cout << "Enter designation: ";
        cin >> designation;
    }

    void showFaculty() {
        cout << "Faculty Name: " << facultyName << endl;
        cout << "Designation : " << designation << endl;
    }
};

int main() {
    CollegeInfo college;
    DepartmentInfo department;
    FacultyInfo faculty1, faculty2;

    cout << "--- Enter College Details ---\n";
    college.inputUniversity();
    college.inputCollege();

    cout << "\n--- Enter Department Details ---\n";
    department.inputUniversity();
    department.inputDepartment();

    cout << "\n--- Enter Faculty 1 Details ---\n";
    faculty1.inputUniversity();
    faculty1.inputFaculty();

    cout << "\n--- Enter Faculty 2 Details ---\n";
    faculty2.inputFaculty();

    cout << "\n=== University Information ===\n";
    college.showUniversity();
    college.showCollege();

    department.showDepartment();

    cout << "\n=== Faculty Members ===\n";
    faculty1.showUniversity();
    faculty1.showFaculty();

    faculty2.showUniversity();
    faculty2.showFaculty();

    return 0;
}
