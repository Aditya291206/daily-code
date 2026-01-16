#include <iostream>
using namespace std;

class B; // forward declaration

class A {
private:
    int x;
public:
    A(int val) : x(val) {}
    friend int sum(const A&, const B&);
};

class B {
private:
    int y;
public:
    B(int val) : y(val) {}
    friend int sum(const A&, const B&);
};

int sum(const A& a, const B& b) {
    return a.x + b.y;
}

int main() {
    A objA(5);
    B objB(10);
    cout << "Sum: " << sum(objA, objB) << endl;
}
