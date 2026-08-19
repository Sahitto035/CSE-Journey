#include <iostream>
using namespace std;

class B1 {
private:
    int a;
public:
    B1(int a) {
        this->a = a;
    }
    int getA() {
        return a;
    }
};

class D1 : public B1 {
private:
    int b;
public:
    D1(int a, int b) : B1(a) {
        this->b = b;
    }
    int getB() {
        return b;
    }
};

class D2 : public D1 {
private:
    int c;
public:
    D2(int a, int b, int c) : D1(a, b) {
        this->c = c;
    }
    void show() {
        cout << getA() << " " << getB() << " " << this->c << endl;
    }
};

int main() {
    D2 obj(1, 2, 3);
    obj.show();
    cout << obj.getA() << " " << obj.getB() << endl;

    return 0;
}