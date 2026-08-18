#include<bits/stdc++.h>
using namespace std;

class Vehicle {
protected:
    string vehicleName;
    string vehicleID;
public:
    Vehicle(string vehicleName, string vehicleID) {
        this->vehicleName = vehicleName;
        this->vehicleID = vehicleID;
    }
};
class Rental : public Vehicle {
protected:
    string rentalType;
    int rentalDuration;
public:
    Rental(string vehicleName, string vehicleID, string rentalType, int rentalDuration):
    Vehicle(vehicleName, vehicleID) {
        this->rentalType = rentalType;
        this->rentalDuration = rentalDuration;
    }
};
class Payment : public Rental {
private:
    double baseCost;
public:
    Payment(string vehicleName, string vehicleID, string rentalType, int rentalDuration, double baseCost):
    Rental(vehicleName, vehicleID, rentalType, rentalDuration) {
        this->baseCost = baseCost;
    }
    double calculateTotalCost() const {
        double subtotal = this->baseCost * this->rentalDuration;
        if (this->rentalType == "Premium" || this->rentalType == "premium") {
            return subtotal + (subtotal * 0.10);
        }
        return subtotal;
    }
    void displayDetails() const {
        double subtotal = this->baseCost * this->rentalDuration;
        double totalCost = this->calculateTotalCost();

        cout << "Vehicle ID: " << this->vehicleID << endl;
        cout << "Vehicle Name: " << this-> vehicleName << endl;
        cout << "Rental Type: " << this->rentalType << endl;
        cout << "Rental Duration: " << this->rentalDuration << "day(s)" << endl;
        cout << "Base rate/day: " << this->baseCost << endl;
        cout << "Subtotal: " << subtotal << endl;

        if (this->rentalType == "Premium" || this->rentalType == "premium") {
            cout << "Premium Fee: " << (subtotal * 0.10) << "(10% surcharge)" << endl;
        }
        cout << "Total Amount Due: " << totalCost << endl;
    }
};
int main() {
    Payment rent1("Tesla Model 3", "V-1024", "Premium", 5, 80.0);
    rent1.displayDetails();

    return 0;
}