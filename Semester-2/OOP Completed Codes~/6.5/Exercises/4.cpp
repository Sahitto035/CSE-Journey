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

    friend Coord operator--(Coord& near) {
        near.x--;
        near.y--;
        return near;
    }
    friend Coord operator--(Coord& near, int dummy) {
        near.x--;
        near.y--;
        return near;
    }
};

int main() {
    Coord c1(10, 10);
    --c1;
    c1.show();
    c1--;
    c1.show();
    return 0;
}