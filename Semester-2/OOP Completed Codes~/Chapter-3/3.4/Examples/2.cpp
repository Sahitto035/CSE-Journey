#include <iostream>
using namespace std;

class Truck;

class Car {
    int passengers;
    int speed;
public:
    Car(int passengers, int speed) {
        this->passengers = passengers;
        this->speed = speed;
    }
    int speedGreater(Car c, Truck t);

};
class Truck {
private:
    int weight;
    int speed;
public:
    Truck(int weight, int speed) {
        this->weight = weight;
        this->speed = speed;
    }
    friend int Car::speedGreater(Car c, Truck t);
};

int Car::speedGreater(Car c, Truck t) {
    return c.speed - t.speed;
}

int main() {
    Car c1(6, 80), c2(4, 90);
    Truck t1(1800, 60), t2(1900, 55);
    int test;
    test = c1.speedGreater(c1, t1);
    if (test == 0) {
        cout << "Car-c1 and Truck-t1 are at same speed" << endl;
    }else if (test<0) {
        cout << "Car-c1 is slower than the Truck-1" << endl;
    }else if (test>0) {
        cout << "Car-c1 is faster than the Truck-1" << endl;
    }

    int test2;
    test2 = c2.speedGreater(c2, t2);
    if (test2 == 0) {
        cout << "Car-c2 and Truck-t2 are at same speed" << endl;
    }
    else if (test2<0) {
        cout << "Car-c2 is slower than the Truck-2" << endl;
    }
    else if (test2>0) {
        cout << "Car-c2 is faster than the Truck-2" << endl;
    }

    return 0;
}