#include <iostream>
using namespace std;

class Vehicle {
private:
    int numberOfWheels, range;
public:
    Vehicle(int numberOfWheels, int range) {
        this->numberOfWheels = numberOfWheels;
        this->range = range;
    }
    void showVehicle() {
        cout << "Wheels: " << this->numberOfWheels << endl;
        cout << "Range: " << this->range << endl;
    }
};

class Car : public Vehicle {
private:
    int passengers;
public:
    Car(int numberOfWheels, int range, int passengers) : Vehicle(numberOfWheels, range) {
        this->passengers = passengers;
    }
    void showCar() {
        showVehicle();
        cout << "Passengers: " << this->passengers << endl;
    }
};

class Truck : public Vehicle {
private:
    int loadLimit;
public:
    Truck(int numberOfWheels, int range, int loadLimit) : Vehicle(numberOfWheels, range) {
        this->loadLimit = loadLimit;
    }
    void showTruck() {
        showVehicle();
        cout << "Load limit: " << this->loadLimit << endl;
    }
};

int main() {
    Car c(4, 500, 8);
    Truck t(4, 500, 8);
    cout << "Car: " << endl;
    c.showCar();
    cout << endl << endl;
    cout << "Truck: " << endl;
    t.showTruck();

    return 0;
}