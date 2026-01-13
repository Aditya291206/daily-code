//Roll No :-  24IT471
//Name :- Aditya Pandya

#include <iostream>
using namespace std;

class PassengerInfo {
public:
    string passengerName;
    int passengerAge;

    void inputPassenger() {
        cout << "Enter passenger name: ";
        cin >> passengerName;
        cout << "Enter passenger age: ";
        cin >> passengerAge;
    }

    void showPassenger() {
        cout << "Passenger Name : " << passengerName << endl;
        cout << "Passenger Age  : " << passengerAge << endl;
    }
};

class FlightInfo {
public:
    string flightNo;
    string flightSchedule;

    void inputFlight() {
        cout << "Enter flight number: ";
        cin >> flightNo;
        cout << "Enter flight schedule (e.g., 10AM-1PM): ";
        cin >> flightSchedule;
    }

    void showFlight() {
        cout << "Flight Number  : " << flightNo << endl;
        cout << "Flight Schedule: " << flightSchedule << endl;
    }
};

class Reservation : public PassengerInfo, public FlightInfo {
public:
    void displayTicket() {
        cout<<"---------------------------------"<<endl;
        cout << "CONFIRMED TICKET"<<endl;
        showPassenger();
        showFlight();

    }
};

int main() {
    Reservation ticket;

    cout <<"Enter Passenger Details"<<endl;
    ticket.inputPassenger();

    cout << "Enter Flight Details"<<endl;
    ticket.inputFlight();

    ticket.displayTicket();

    return 0;
}
