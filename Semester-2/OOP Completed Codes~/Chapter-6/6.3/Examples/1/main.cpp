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

    int operator==(Coord far) {
        int check;
        if ((this->x == far.x) && (this->y == far.y)) {
            check = 1;
        }else {
            check = 0;
        }
        return check;
    }
    bool operator&&(Coord far) {
        return (this->x && far.x) && (this->y && far.y);
    }
};

int main() {
    Coord c1(10, 10);
    Coord c2(5, 3);
    Coord c3(10, 10);
    Coord c4(0, 0);

    if (c1 == c2) {
        cout << "c1 is same as c2" << endl;
    }else {
        cout << "c1 is not same as c2" << endl;
    }
    if (c1 == c3) {
        cout << "c1 is same as c3" << endl;
    }
    else {
        cout << "c1 is not same as c3" << endl;
    }
    if (c1 && c2) {
        cout << "c1 && c2: True" << endl;
    }else {
        cout << "c1 && c2: False" << endl;
    }
    if (c1 && c4) {
        cout << "c1 && c4: True" << endl;
    }else {
        cout << "c1 && c4: False" << endl;
    }

    return 0;
}