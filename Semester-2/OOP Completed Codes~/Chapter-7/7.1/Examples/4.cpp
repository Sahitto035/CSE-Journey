#include <iostream>
using namespace std;

class Base {
private:
    int x;
public:
    void setX(int x) {
        this->x = x;
    }
    void showX() {
        cout <<"X: " << x << endl;
    }
};

class Derived : private Base {
private:
    int y;
public:
    void setXY(int x, int y) {
        setX(x);
        this->y = y;
    }
    void showXY() {
        showX();
        cout <<"Y: " << y << endl;
    }
};

int main() {
    Derived obj;
    obj.setXY(10, 20);
    obj.showXY();

    return 0;
}
