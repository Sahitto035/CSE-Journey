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
        cout << "X: " << this->x << " Y: " << this->y << endl;
    }

    Coord operator+(Coord far) {
        int x = this->x + far.x;
        int y = this->y + far.y;
        return Coord(x,y);
    }
    Coord operator+(int far) {
        int x = this->x + far;
        int y = this->y + far;
        return Coord(x,y);
    }
};

int main() {
    Coord c1(10, 10);
    Coord c2(5, 3);
    Coord c3 = c1 + c2;
    c3.show();
    Coord c4 = c1+15;
    c4.show();
    return 0;
}