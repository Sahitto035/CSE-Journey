#include <iostream>
using namespace std;
class Samp {
private:
    int a, b;
public:
    Samp() {
        a = b = 0;
    }
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
    Samp obj[4] = {
                    Samp(1, 2),
                    Samp(3, 4),
                    Samp(5, 6),
                    Samp(7, 8)
    };
    int i;
    Samp* p;
    p = obj;
    for (i = 0; i < 4; i++) {
        cout << p->getA() << " " << p->getB() << endl;
        p++;
    }
    return 0;
}