#include <iostream>
using namespace std;

class MyClass {
private:
    int a;
public:
    MyClass() {
        this->a = 0;
    }
    MyClass(int a) {
        this->a = a;
    }
    int getA() {
        return a;
    }
};

int main() {
    MyClass* p;
    MyClass obj(10);
    p = new MyClass[10];
    if (!p) {
        cout << "Allocation failed" << endl;
    }
    for (int i = 0; i < 10; i++) {
        p[i] = obj;
    }
    for (int i = 0; i < 10; i++) {
        cout << "p[" << i << "] = " << p[i].getA() << endl;
    }

    return 0;
}