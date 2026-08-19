#include <iostream>
using namespace std;

class Coord {
private:
    int x, y;
public:
    Coord() {
        this->x = this->y = 0;
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

    friend Coord operator-(Coord near, Coord far) {
        return Coord(near.x - far.x, near.y - far.y);
    }
    friend Coord operator/(Coord near, Coord far) {
        return Coord(near.x / far.x, near.y / far.y);
    }
};

int main() {
    Coord c1(10, 10);
    Coord c2(2, 5);
    Coord c3 = c1-c2;
    Coord c4 = c1/c2;

    c3.show();
    c4.show();
    return 0;
}