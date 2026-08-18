#include<bits/stdc++.h>
using namespace std;
template<class T>

class Rectangle {
private:
    T width, height;
public:
    Rectangle(T width, T height) {
        this->width = width;
        this->height = height;
    }
    T area() {
        return width * height;
    }
};
int main() {
    Rectangle r1(5, 10);
    Rectangle r2(10L, 70L);
    Rectangle r3(5.2, 9.9);

    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
}