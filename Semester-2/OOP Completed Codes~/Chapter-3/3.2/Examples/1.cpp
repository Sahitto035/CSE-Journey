#include <iostream>
#include <cmath>
using namespace std;

class Samp {
private:
    int number;
    public:
    Samp(int munber) {
        this->number = munber;
    }
    int getNumber() {
        return number;
    }
};
int sqrIt(Samp object) {
    return object.getNumber() * object.getNumber();
}
int main() {
    Samp object1(10), object2(20);
    cout << sqrIt(object1) << endl;
    cout << sqrIt(object2) << endl;
    return 0;
}