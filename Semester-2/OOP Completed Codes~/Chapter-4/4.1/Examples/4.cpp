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
    Samp object[4][2] = {
                            Samp(1, 2), Samp(3, 4),
                            Samp(5, 6), Samp(7, 8),
                            Samp(9, 10), Samp(11, 12),
                            Samp(13, 14), Samp(15, 16)
                        };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << object[i][j].getA() << " ";
            cout << object[i][j].getB() << endl;
        }
    }

    return 0;
}