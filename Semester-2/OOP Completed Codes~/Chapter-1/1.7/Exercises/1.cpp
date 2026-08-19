#include<iostream>
#include<cmath>
using namespace std;

int sroot(int i);
long sroot(long i);
double sroot(double i);

int main() {
    cout << "Square root of 90.34 is :" << sroot(90.34) << endl;
    cout << "Square root of 90L is : " << sroot(90L) << endl;
    cout << "Square root of 90 is: " << sroot(90) << endl;

    return 0;
}

int sroot(int i) {
    cout << "Computing integer root\n";
    return (int) sqrt((double) i);
}
long sroot(long i) {
    cout << "computing long root\n";
    return (long) sqrt((double) i);
}
double sroot(double i) {
    cout << "computing double root\n";
    return sqrt(i);
}