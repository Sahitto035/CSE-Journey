#include <iostream>
using namespace std;

int main() {
    int* a;
    a = new int(9);
    if (!a) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }
    cout << "a: " << *a << endl;
    delete a;
    return 0;
}