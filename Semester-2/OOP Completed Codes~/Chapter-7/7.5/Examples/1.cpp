#include <iostream>
using namespace std;

class Base {
    public:
    int i;
};
class Derived1 : virtual public Base {
public:
    int j;
};
class Derived2 : virtual public Base {
public:
    int k;
};

class Derived3 : virtual public Derived1, virtual public Derived2 {
public:
    int product() {
        return i * j * k;
    }
};

int main() {
    Derived3 obj;
    obj.i = 5;
    obj.j = 2;
    obj.k = 3;
    cout << obj.product() << endl;

    return 0;
}