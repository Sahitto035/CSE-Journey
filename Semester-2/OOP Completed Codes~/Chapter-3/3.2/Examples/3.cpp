#include <iostream>
using namespace std;
class Samp {
private:
    int number;
public:
    Samp(int number) {
        this->number = number;
    }
    void setNumber(int number) {
        this->number = number;
    }
    int getNumber() {
        return number;
    }
};

void sqrIt(Samp* object) {
    object->setNumber(object->getNumber() * object->getNumber());
    cout << "Inside sqrIt function" << endl;
    cout << "Value: " << object->getNumber() << endl;
}

int main () {
    Samp object(10);
    sqrIt(&object);

    cout << "Inside main" << endl;
    cout << "Value: " << object.getNumber() << endl;

    return 0;
}