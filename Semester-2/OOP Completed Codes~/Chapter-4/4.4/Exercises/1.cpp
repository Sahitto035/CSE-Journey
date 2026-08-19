#include <iostream>
using namespace std;
int main() {
    float* f;
    f = new float;
    long* l;
    l = new long;
    char* c;
    c = new char;

    if (!f || !l || !c) {
        cout << "Error!" << endl;
    }

    *f = 3.14;
    *l = 2563.155;
    *c = 's';

    cout << *f << endl;
    delete f;
    cout << *l << endl;
    delete l;
    cout << *c << endl;
    delete c;
}