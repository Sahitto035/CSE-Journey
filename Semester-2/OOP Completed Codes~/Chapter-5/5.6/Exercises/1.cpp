#include <iostream>
using namespace std;

int diff(int a, int b) {
    return abs(a - b);
}
float diff(float a, float b) {
    return abs(a - b);
}

int main() {
    int (*p1) (int, int);
    float (*p2) (float, float);

    p1 = diff;
    p2 = diff;

    cout << p1(10, 5) << endl;
    cout << p2(10.9, 15.6) << endl;

    return 0;
}