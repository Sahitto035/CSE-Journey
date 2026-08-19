#include <iostream>
using namespace std;

class Coord {
private:
    int x, y;
public:
    Coord() {
        this->x = 0;
        this->y = 0;
    }
    Coord(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int getX() {
        return this->x;
    }
    int getY() {
        return this->y;
    }
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }
    void show() {
        cout << "(x, y) = (" << this->x << ", " << this->y << ")" << endl;
    }
    Coord operator+(Coord far) {
        int newX = this->x + far.getX();
        int newY = this->y + far.getY();
        return Coord(newX,newY);
    }
    Coord operator-(Coord far) {
        int newX = this->x - far.getX();
        int newY = this->y - far.getY();
        return Coord(newX,newY);
    }
    Coord operator=(Coord far) {
        this->x = far.getX();
        this->y = far.getY();
        return *this;
    }
};

int main() {
    Coord c1(15,16), c2(7, 8);
    c1.show();
    c2.show();
    Coord c3 = c1 + c2;
    c3.show();
    c3 = c1 - c2;
    c3.show();
    c3 = c1;
    c3.show();
    return 0;
}
