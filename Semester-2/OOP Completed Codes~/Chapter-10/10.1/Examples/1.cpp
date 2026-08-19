#include <iostream>
using namespace std;

class Base {
private:
    int x;
public:
    void setX(int x) {
        this->x = x;
    }
    int getX() {
        return x;
    }
};
class Derived : public Base {
private:
    int y;
public:
    void setY(int y) {
        this->y = y;
    }
    int getY() {
        return y;
    }
};

int main() {
    Base* p;
    Base baseObj;
    Derived derivedObj;
    p = &derivedObj;
    p->setX(99);
    derivedObj.setY(88);

    cout << "X: " << p->getX() << endl;
    cout << "Y: " << derivedObj.getY() << endl;

    return 0;
}