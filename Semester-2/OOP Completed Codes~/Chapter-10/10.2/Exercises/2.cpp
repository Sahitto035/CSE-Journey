#include <iostream>
using namespace std;

class Dist {
public:
    double distance;
    Dist(double distance) {
        this->distance = distance;
    }
    virtual void trav_time() {
        cout << "Travel time at 60mph: " << this->distance / 60 << endl;
    }
};
class Matric : public Dist {
public:
    Matric(double distance) : Dist(distance) {}
    void trav_time() {
        cout << "Travel time at 100kph: " << this->distance / 100 << endl;
    }
};

int main() {
    Dist* p;
    Dist mph(88);
    Matric kph(88);

    p = &mph;
    p->trav_time();

    p = &kph;
    p->trav_time();

    return 0;
}