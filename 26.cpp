#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower = 500;

    friend class Mechanic; // full access granted
};

class Mechanic {
public:
    void inspect(const Engine& e) {
        cout << "Horsepower: " << e.horsepower << endl;
    }
};

int main() {
    Engine eng;
    Mechanic m;
    m.inspect(eng);
}
