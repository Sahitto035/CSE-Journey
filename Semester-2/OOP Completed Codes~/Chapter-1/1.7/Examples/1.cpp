#include<iostream>
using namespace std;

int myAbs(int n);
long myAbs(long n);
double myAbs(double n);

int main() {
    cout << "Absolute value of -10: " << myAbs(-10) << "\n\n";
    cout << "Absolute value of -10L: " << myAbs(-10L) << "\n\n";
    cout << "Absolute value of -10.01: " << myAbs(-10.01) << "\n\n";

    return 0;
}

int myAbs(int n) {
    cout << "In integer abs()\n";
    return n < 0 ? -n : n;
}

long myAbs(long n) {
    cout << "In long abs()\n";
    return n< 0 ? -n:n;
}
double myAbs(double n) {
    cout << "In double abs()\n";
    return n<0 ? -n:n;
}