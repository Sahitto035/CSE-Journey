#include <iostream>
using namespace std;

double ractangleArea(double length, double width) {
    return length * width;
}
double ractangleArea(double length) {
    return length * length;
}

int main(){
    cout << "Aith 3.5 and 4.5, Area= " << ractangleArea(3.5, 4.5) << endl;
    cout << "with 3.5, Area= " << ractangleArea(3.5) << endl;

    return 0;
}