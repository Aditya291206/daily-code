#include <iostream>
using namespace std;

class PaymentMethod {
public:
    virtual void pay(double amount) = 0;
    virtual ~PaymentMethod() {}
};

class CreditCard : public PaymentMethod {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " using Credit Card" << endl;
    }
};

class UPI : public PaymentMethod {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " using UPI" << endl;
    }
};

class PaymentProcessor {
    PaymentMethod* method;

public:
    PaymentProcessor(PaymentMethod* m) : method(m) {}

    void process(double amount) {
        method->pay(amount);
    }
};

int main() {
    CreditCard cc;
    UPI upi;

    PaymentProcessor p1(&cc);
    PaymentProcessor p2(&upi);

    p1.process(1200);
    p2.process(500);

    return 0;
}
