#include <iostream>
using namespace std;

int main() {
    int* p = new int;
    if (!p) {
        cout << "Error allocating memory" << endl;
        return 1;
    }
    *p = 100;
    cout << "int at p: " << *p << endl;
    delete p;
    return 0;
}