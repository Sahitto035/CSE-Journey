#include <iostream>
using namespace std;
class Base {
public:
    int i;
    Base(int i) {
        this->i = i;
    }
    virtual void func() {
        cout << "Using Base version of func():" << endl;
        cout << "I: " << i << endl;
    }
};
class Derived1 : public Base {
public:
    Derived1(int i) : Base(i) {}
    void func() {
        cout << "Using Derived1 version of func():" << endl;
        cout << "I * I: " << i * i << endl;
    }
};
class Derived2 : public Base {
public:
    Derived2(int i) : Base(i) {}
};

int main() {
    Base* p;
    Base obj(10);
    Derived1 DObj(10);
    Derived2 DObj2(10);

    p = &obj;
    p->func();

    p = &DObj;
    p->func();

    p = &DObj2;
    p->func();

    return 0;
}