#include <iostream>
using namespace std;

void f(int a = 0, int b = 0) {
    cout << "a; " << a << "   b: " << b << endl;
}
int main() {
    f();
    f(10);
    f(15, 48);

    return 0;
}