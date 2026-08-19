#include <iostream>
using namespace std;

class Samp {
private:
    int a;
public:
    void setA(int a) {
        this->a = a;
    }
    int getA() {
        return a;
    }
};
int main() {
    Samp object[4];
    for (int i = 0; i < 4; i++) {
        object[i].setA(i);
    }
    for (int i = 0; i < 4; i++) {
        cout << object[i].getA() << endl;
    }
    return 0;
}