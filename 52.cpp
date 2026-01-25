class Flyable {
public:
    virtual void fly() = 0;   // pure virtual
    virtual ~Flyable() {}
};

class Airplane : public Flyable {
public:
    void fly() override {
        cout << "Airplane flying\n";
    }
};

int main() {
    Flyable* f = new Airplane();
    f->fly();
    delete f;
}
