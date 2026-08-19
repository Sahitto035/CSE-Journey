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
class B2 {
private:
    int b;
public:
    B2(int b) {
        this->b = b;
    }
    int getB() {
        return b;
    }
};

class D : public B1, public B2 {
private:
    int c;
public:
    D(int a, int b, int c) : B1(a), B2(b) {
        this->c = c;
    }
    void show() {
        cout << getA() << " " << getB() << " " << c << endl;
    }
};

int main() {
    D obj(1, 2, 3);
    obj.show();

    return 0;
}