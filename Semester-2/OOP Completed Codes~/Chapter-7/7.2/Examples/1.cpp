#include <iostream>
using namespace std;

class Samp {
private:
    int a;
protected:
    int b;
public:
    int c;
    Samp(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int getA() {
        return a;
    }
    int getB() {
        return b;
    }
};

int main() {
    Samp obj(10, 20);
    obj.c = 30;

    cout << obj.getA() << " " << obj.getB() << " " << obj.c << endl;

    return 0;
}