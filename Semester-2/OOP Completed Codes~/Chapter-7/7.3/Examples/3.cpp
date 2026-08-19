#include <iostream>
using namespace std;

class Base {
private:
    int a;
public:
    Base(int a) {
        this->a = a;
        cout << "Base Constructor" << endl;
    }
    ~Base() {
        cout << "Base Destructor" << endl;
    }
    void showA() {
        cout << "A: " << a << endl;
    }
};

class Derived : public Base {
private:
    int b;
public:
    Derived(int b) : Base(b) {
        this->b = b;
        cout << "Derived Constructor" << endl;
    }
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
    void showB() {
        cout << "B: " << b << endl;
    }
};

int main() {
    Derived obj(10);

    obj.showA();
    obj.showB();

    return 0;
}