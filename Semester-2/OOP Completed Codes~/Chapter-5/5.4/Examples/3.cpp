#include <iostream>
using namespace std;

class MyClass {
private:
    int a;
public:
    MyClass(int a = 0) {
        this->a = a;
    }
    int getA() {
        return a;
    }
};
int main() {
    MyClass obj1(10), obj2;
    cout << obj1.getA() << endl;
    cout << obj2.getA() << endl;

    return 0;

}