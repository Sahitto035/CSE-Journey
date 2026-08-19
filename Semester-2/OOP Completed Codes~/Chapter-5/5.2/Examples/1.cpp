#include <iostream>
using namespace std;

class Array{
private:
    int *p;
    int size;
public:
    Array(int size) {
        p = new int[size];
        if (!p) {
            cout << "Error allocating memory" << endl;
            exit(1);
        }
        this->size = size;
        cout << "Using normal constructor" << endl;
    }
    Array(const Array &a) {
        int i;
        this->size = a.size;
        this->p = new int[size];
        if (!this->p) {
            cout << "Error allocating memory" << endl;
            exit(1);
        }
        for (i = 0; i < size; i++) {
            this->p[i] = a.p[i];
            cout << "Using copy constructor" << endl;
        }
    }
    ~Array() {
        delete p;
    }
    void put(int i, int j) {
        if (i >= 0 && i < this->size) {
            this->p[i] = j;
        }
    }
    int get(int i) {
        return this->p[i];
    }
};

int main() {
    Array num(10);
    for (int i = 0; i < 10; i++) {
        num.put(i, i);
    }
    for (int i = 9; i >= 0; i--) {
        cout << num.get(i) << endl;
    }
    Array x = num;
    for (int i = 0; i < 10; i++) {
        cout << x.get(i) << endl;
    }
}