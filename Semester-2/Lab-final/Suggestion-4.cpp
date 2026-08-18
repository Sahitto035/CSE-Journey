#include<bits/stdc++.h>
using namespace std;
template <class T>
class Cylinder {
private:
    T radius, height;
public:
    Cylinder(T radius, T height) {
        this->radius = radius;
        this->height = height;
    }
    T volume() {
        return 3.1415926 * this->radius * this->radius * this->height;
    }
};
int main() {
    Cylinder c1(5, 10);
    Cylinder c2(9L, 10L);
    Cylinder c3(5.5, 10.10);

    cout << c1.volume() << endl;
    cout << c2.volume() << endl;
    cout << c3.volume() << endl;

    return 0;
}