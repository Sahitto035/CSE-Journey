#include <iostream>
#include <cstdlib>
using namespace std;

class Dynarry {
private:
    int* p;
    int size;
public:
    Dynarry(int size) {
        p = new int[size];
        if (!p) {
            cout << "Error allocating memory" << endl;
            exit(1);
        }
        this->size = size;
    }
    int& put(int i) {
        if (i < 0 || i >= size) {
            cout << "Error trying to put into memory" << endl;
            exit(1);
        }
        return p[i];
    }
    int& get(int i) {
        if (i < 0 || i >= size) {
            cout << "Error trying to get into memory" << endl;
            exit(1);
        }
        return p[i];
    }

    Dynarry& operator=(Dynarry& d) {
        int i;
        if (p != d.p) {
            cout << "Error trying to copy into memory" << endl;
            exit(1);
        }
        for (i = 0; i < size; i++) {
            p[i] = d.p[i];
        }
        return *this;
    }
};

int main() {
    int i;
    Dynarry ob1(10), ob2(20), ob3(30);
    ob1.put(3) = 100;
    i = ob1.get(3);
    cout << i << endl;

    ob2 = ob1;
    i = ob2.get(3);
    cout << i << endl;
    ob1 = ob3;

    return 0;
}