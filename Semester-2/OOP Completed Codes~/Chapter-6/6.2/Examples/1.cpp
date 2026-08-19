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
};

int main() {
    Coord c1(10, 20), c2(4, 5);
    Coord c3 = c1 + c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}