#include <iostream>
using namespace std;
class Samp {
private:
    int a;
public:
    Samp() {
        a = 0;
    }
    Samp(int a) {
        this->a = a;
    }
    int getA() {
        return a;
    }
};

int main() {
    Samp object[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};
    Samp* p;
    p = &object[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << p->getA() << " ";
            p++;
        }
        cout << endl;
    }
    return 0;
}