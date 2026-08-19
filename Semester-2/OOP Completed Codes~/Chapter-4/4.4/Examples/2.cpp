#include <iostream>
using namespace std;

class Samp {
private:
    int i, j;
public:
    void set(int i, int j) {
        this->i = i;
        this->j = j;
    }
    int getProduct() {
        return i * j;
    }
};
int main() {
    Samp* p = new Samp();
    if (!p) {
        cout << "Error creating Samp" << endl;
        return 1;
    }
    p->set(3, 4);
    cout<< "Product: " << p->getProduct() << endl;
    delete p;
    return 0;
}