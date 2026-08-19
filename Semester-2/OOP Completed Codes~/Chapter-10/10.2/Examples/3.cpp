#include <iostream>
#include<cstdlib>
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
    void func() {
        cout << "Using Derived1 version of func(): " << endl;
        cout << "I * I: " << this->i * this->i << endl;
    }
};
class Derived2 : public Base {
public:
    Derived2(int i) : Base(i){}
    void func() {
        cout << "Using Derived2 version of func(): " << endl;
        cout << "I + I: " << this->i + this->i << endl;
    }
};

int main() {
    Base* p;
    Derived1 DObj1(10);
    Derived2 DObj2(10);

    for (int i = 0; i < 10; i++) {
        int j = rand();
        if ((j % 2) == 0) {
            p = &DObj1;
        }else {
            p = &DObj2;
        }
        p->func();
    }

    return 0;
}