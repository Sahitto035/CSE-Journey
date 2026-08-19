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
        return this->a;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(10);

    cout << "obj1: " << obj1.getA() << endl;
    cout << "obj2: " << obj2.getA() << endl;

    return 0;
}