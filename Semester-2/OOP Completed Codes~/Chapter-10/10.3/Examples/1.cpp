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
    void getDim(double &dim1, double &dim2) {
        dim1 = this->dim1;
        dim2 = this->dim2;
    }
    virtual double getArea() = 0;
};
class Rectangle : public Area {
public:
    double getArea() {
        double dim1, dim2;
        getDim(dim1, dim2);
        return dim1 * dim2;
    }
};
class Triangle : public Area {
public:
    double getArea() {
        double dim1, dim2;
        getDim(dim1, dim2);
        return dim1 * dim2 * 0.5;
    }
};

int main() {
    Area* p;
    Rectangle R;
    Triangle T;
    R.setArea(3, 4);
    T.setArea(3, 4);

    p = &R;
    cout << p->getArea() << endl;

    p = &T;
    cout << p->getArea() << endl;

    return 0;
}