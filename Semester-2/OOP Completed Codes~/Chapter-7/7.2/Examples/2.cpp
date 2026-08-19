#include <iostream>
using namespace std;

class Base {
protected:
    int a, b;
public:
    void setAB(int a, int b) {
        this->a = a;
        this->b = b;
    }
};
class Derived : public Base {
private:
    int c;
public:
    void setC(int c) {
        this->c = c;
    }
    void showABC() {
        cout << a << " " << b << " " << c << endl;
    }
};
int main() {
    Derived obj;
    obj.setAB(1, 2);
    obj.setC(3);

    obj.showABC();

    return 0;
}