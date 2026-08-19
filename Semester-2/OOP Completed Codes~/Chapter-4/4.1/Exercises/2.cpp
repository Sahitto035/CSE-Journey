#include <iostream>
using namespace std;
class Squeres {
private:
    int num, sqr;
public:
    Squeres() {
        num = 0;
        sqr = 0;
    }
    Squeres(int num, int sqr) {
        this->num = num;
        this->sqr = sqr;
    }
    void show() {
        cout << "Num: " << num << endl;
        cout << "Sqr: " << sqr << endl;
    }
};
int main() {
    Squeres s[10] = {
        Squeres(1, 1),
        Squeres(2, 4),
        Squeres(3, 9),
        Squeres(4, 16),
        Squeres(5, 25),
        Squeres(6, 36),
        Squeres(7, 49),
        Squeres(8, 64),
        Squeres(9, 81),
        Squeres(10, 100),
    };
    for (int i = 0; i < 10; i++) {
        s[i].show();
    }
}