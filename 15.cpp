//Roll No :-  24IT471
//Name :- Pandya Aditya

#include <iostream>
using namespace std;

class VehicleInfo {
public:
    string modelName;
    string manufacturer;
    double cost;

    void inputVehicle() {
        cout << "Enter model name: ";
        cin >> modelName;
        cout << "Enter manufacturer: ";
        cin >> manufacturer;
        cout << "Enter price: ";
        cin >> cost;
    }

    void displayVehicle() {
        cout << "Model       : " << modelName << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Price       : " << cost << endl;
    }
};

class CarInfo : public VehicleInfo {
public:
    int numberOfSeats;

    void inputCar() {
        inputVehicle();
        cout << "Enter number of seats: ";
        cin >> numberOfSeats;
    }

    void displayCar() {
        cout << "\n--- Car Details ---\n";
        displayVehicle();
        cout << "Seats       : " << numberOfSeats << endl;
    }
};

class BikeInfo : public VehicleInfo {
public:
    bool carrierAvailable;

    void inputBike() {
        inputVehicle();
        cout << "Does it have a carrier (1 for Yes, 0 for No): ";
        cin >> carrierAvailable;
    }

    void displayBike() {
        cout << "\n--- Bike Details ---\n";
        displayVehicle();
        cout << "Carrier: " << (carrierAvailable ? "Yes" : "No") << endl;
    }
};

class TruckInfo : public VehicleInfo {
public:
    double capacityTons;

    void inputTruck() {
        inputVehicle();
        cout << "Enter load capacity (in tons): ";
        cin >> capacityTons;
    }

    void displayTruck() {
        cout << "\n--- Truck Details ---\n";
        displayVehicle();
        cout << "Load Capacity: " << capacityTons << " tons" << endl;
    }
};

int main() {
    CarInfo car;
    BikeInfo bike;
    TruckInfo truck;

    cout << "--- Enter Car Details ---\n";
    car.inputCar();
    car.displayCar();

    cout << "\n--- Enter Bike Details ---\n";
    bike.inputBike();
    bike.displayBike();

    cout << "\n--- Enter Truck Details ---\n";
    truck.inputTruck();
    truck.displayTruck();

    return 0;
}
