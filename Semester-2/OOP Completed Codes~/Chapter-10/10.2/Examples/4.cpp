#include <iostream>
using namespace std;

class Area {
private:
    double dim1, dim2;
public:
    void setArea(double dim1, double dim2) {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }
    void getDim(double& dim1, double& dim2) {
        dim1 = this->dim1;
        dim2 = this->dim2;
    }
    virtual double getArea() {
        cout << "You must override this function" << endl;
        return 0.0;
    }
};
class Rectangle : public Area {
public:
    double getArea() {
        double d1, d2;
        getDim(d1, d2);
        return d1 * d2;
    }
};
class Triangle : public Area {
public:
    double getArea() {
        double d1, d2;
        getDim(d1, d2);
        return d1 * d2 * 0.5 ;
    }
};

int main() {
    Area* p;
    Rectangle R;
    Triangle T;

    R.setArea(4.0, 3.0);
    T.setArea(4.0, 3.0);

    p = &R;
    cout << "Rectangle area: " << p->getArea() << endl;

    p = &T;
    cout << "Triangle area: " << p->getArea() << endl;

    return 0;
}