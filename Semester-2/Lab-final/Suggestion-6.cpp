#include<bits/stdc++.h>
using namespace std;
template<class T>

class Cuboid {
private:
    T length, width, height;
public:
    Cuboid(T length, T width, T height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    T volume() {
        return this->length * this->width * this->height;
    }
};
int main() {
    Cuboid c1(12, 13, 14);
    Cuboid c2(11.87f, 22.99f, 33.00f);


    cout << c1.volume() << endl;
    cout << c2.volume() << endl;
    return 0;
}
