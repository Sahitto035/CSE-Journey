#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor" << endl;
    }
    ~Base() {
        cout << "Base destructor" << endl;
    }
};
class Derived : public Base {
private:
    int a;
public:
    Derived(int a) {
        cout << "Derived constructor" << endl;
        this->a = a;
    }
    ~Derived() {
        cout << "Derived destructor" << endl;
    }
    void showA() {
        cout << "A: " << this->a << endl;
    }
};

int main() {
    Derived obj(10);
    obj.showA();

    return 0;
}