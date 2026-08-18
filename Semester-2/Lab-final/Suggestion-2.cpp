#include<bits/stdc++.h>
using namespace std;

class Passenger {
protected:
    string passengerName;
    string phoneNumber;
public:
    Passenger() {

    }
    Passenger(string passengerName, string phoneNumber) {
        this-> passengerName = passengerName;
        this-> phoneNumber = phoneNumber;
    }
    void showPassengerInfo() {
        cout << "Passenger Name: " << passengerName << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};
class Flight {
protected:
    string flightNumber;
    string destination;
public:
    Flight() {

    }
    Flight(string flightNumber, string destination) {
        this->flightNumber = flightNumber;
        this->destination = destination;
    }
    void showFlightInfo() {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Destination: " << destination << endl;
    }
};
class Airline {
protected:
    string airlineName, headquarter;
public:
    Airline() {

    }
    Airline(string airlineName, string headquarter) {
        this->airlineName = airlineName;
        this->headquarter = headquarter;
    }
    void showAirlineInfo() {
        cout << "Airline Name: " << airlineName << endl;
        cout << "Headquarter: " << headquarter << endl;
    }
};
class ReservationInfo: public Passenger, public Flight, public Airline{
private:
    string seatNo, TravelDate;
public:
    ReservationInfo(): Passenger(), Flight(), Airline() {

    }
    ReservationInfo(string passengerName, string phoneNumber, string flightNumber, string destination, string airlineName, string headquarter, string seatNo, string TravelDate) :
        Passenger(passengerName, phoneNumber), Flight(flightNumber, destination), Airline(airlineName, headquarter) {
            this->seatNo = seatNo;
            this->TravelDate = TravelDate;
        }
        void showReservation() {
            showPassengerInfo();
            showFlightInfo();
            showAirlineInfo();
            cout << "Seat Number: " << seatNo << endl;
            cout << "Travel Date: " << TravelDate   << endl;
        }
};
int main() {
    // Wrap all string arguments in double quotes
    ReservationInfo r("Norris", "01821770999", "B21A", "USA", "Qatar", "Dubai", "42", "08/09/2026");

    r.showReservation();
    return 0;
}