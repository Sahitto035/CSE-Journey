#include <iostream>
using namespace std;

class MyClass {
private:
    int* p;
public:
    MyClass(int i) {
        p = new int;
        if (!p) {
            cout << "Allocation error" << endl;
            exit(1);
        }
        *p = i;
    }
    MyClass(const MyClass& o) {
        p = new int;
        if (!p) {
            cout << "Allocation error" << endl;
            exit(1);
        }
        *p = *o.p;
    }
    ~MyClass() {
        delete p;
    }
    friend int getValue(const MyClass o);
};
int getValue(MyClass o) {
    return *o.p;
}

int main() {
    MyClass a(10), b(20);
    cout << getValue(a) << " " << getValue(b) << endl;

    return 0;
}