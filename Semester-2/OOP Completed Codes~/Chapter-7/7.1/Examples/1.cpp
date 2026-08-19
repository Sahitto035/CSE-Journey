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
        cout << "X: " << this->x << endl;
    }
};

class Derived : public Base {
private:
    int y;
public:
    void setY(int y) {
        this->y = y;
    }
    void showY() {
        cout << "Y: " << this->y << endl;
    }
};

int main() {
    Derived obj;
    obj.setX(10);
    obj.setY(20);

    obj.showX();
    obj.showY();

    return 0;
}