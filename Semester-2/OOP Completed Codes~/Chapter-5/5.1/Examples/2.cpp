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
    MyClass obj1[10];
    MyClass obj2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        cout << "Obj1[" << i+1 << "] = " << obj1[i].getA() << " \t"
             << "Obj2[" << i+1 << "] = " << obj2[i].getA() << endl;
    }
    return 0;
}