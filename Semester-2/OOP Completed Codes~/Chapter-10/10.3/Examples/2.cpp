#include <iostream>
using namespace std;

class Base {
public:
    virtual void func() {
        cout << "Using base version of func()" << endl;
    }
};
class Derived1 : public Base {
public:
    void func() {
        cout << "Using derived1 version of func()" << endl;
    }
};
class Derived2 : public Base {
public:
    void func() {
        cout << "Using derived2 version of func()" << endl;
    }
};

int main() {
    Base* p;
    Base obj;
    Derived1 D1Obj;
    Derived2 D2Obj;

    p = &obj;
    p->func();

    p = &D1Obj;
    p->func();

    p = &D2Obj;
    p->func();

    return 0;
}