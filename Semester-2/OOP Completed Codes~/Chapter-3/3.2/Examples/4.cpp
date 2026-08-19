#include <iostream>
using namespace std;
class Samp {
private:
    int number;
public:
    Samp(int number) {
        this->number = number;
        cout << "Constructing" << endl;
    }
    ~Samp() {
        cout << "Destructing" << endl;
    }
    int getNumber() {
        return number;
    }
};

int sqrIt(Samp object) {
    return object.getNumber() * object.getNumber();
}
int main() {
    Samp object(10);
    cout << sqrIt(object) << endl;
    return 0;
}