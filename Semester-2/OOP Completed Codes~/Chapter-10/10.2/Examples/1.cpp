#include <iostream>
using namespace std;

class Base {
public:
    int i;
    Base(int i) {
        this->i = i;
    }
    virtual void func() {
        cout << "Using Base version of func(): " << endl;
        cout << "I: " << this->i << endl;
    }
};
class Derived1 : public Base {
public:
    Derived1(int i) : Base(i) {}
    virtual void func() {
        cout << "Using Derived1 version of func(): " << endl;
        cout << "I + I: " << this->i + this->i << endl;
    }
};
class Derived2 : public Base {
public:
    Derived2(int i) : Base(i) {}
    virtual void func() {
        cout << "Using Derived2 version of func(): " << endl;
        cout << "I * I: " << this->i * this->i << endl;
    }
};
int main() {
    Base* p;
    Base obj(10);
    Derived1 dObj1(10);
    Derived2 dObj2(10);
    p = &obj;
    p->func();

    p = &dObj1;
    p->func();

    p = &dObj2;
    p->func();

    return 0;
}