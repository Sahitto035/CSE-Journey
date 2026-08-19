#include <iostream>
using namespace std;

class Base {
private:
    int a;
public:
    Base(int a) {
        this->a = a;
        cout << "Base constructor" << endl;
    }
    ~Base() {
        cout << "Base destructor" << endl;
    }
    void showA() {
        cout << "A: " << a << endl;
    }
};

class Derived : public Base {
private:
    int b;
public:
    Derived(int a, int b) : Base(a) {
        this->b = b;
        cout << "Derived constructor" << endl;
    }
    void showB() {
        cout << "B: " << b << endl;
    }
};

int main() {
    Derived obj(10, 20);

    obj.showA();
    obj.showB();

    return 0;
}