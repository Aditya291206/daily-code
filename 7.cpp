//Name: Aditya Pandya
//ID: 24IT471

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:

    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }


    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }


    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    friend Distance addDistance(const Distance &d1, const Distance &d2);
};


Distance addDistance(const Distance &d1, const Distance &d2) {
    Distance temp;
    temp.feet = d1.feet + d2.feet;
    temp.inches = d1.inches + d2.inches;


    if (temp.inches >= 12) {
        temp.feet += temp.inches / 12;
        temp.inches = temp.inches % 12;
    }

    return temp;
}

int main() {
    Distance d1, d2, sum;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "\nEnter second distance:\n";
    d2.input();


    sum = addDistance(d1, d2);

    cout << "\nFirst distance: ";
    d1.display();

    cout << "Second distance: ";
    d2.display();

    cout << "Sum of distances: ";
    sum.display();

    return 0;
}
