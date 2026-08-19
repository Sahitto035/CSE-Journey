#include <iostream>
using namespace std;

class area_cl {
    public:
    double height, width;
    area_cl() {
        height=width=0;
    }
    area_cl(double h, double w) {
        height = h;
        width = w;
    }
};
class rectangle : public area_cl {
    public:
    rectangle(double h, double w) {
        height = h;
        width = w;
    }
    double area(double height, double width) {
        return height*width;
    }
    void show() {
        cout<<"area: "<<area(height,width)<<endl;
    }
};
class isoscales : public area_cl {
    public:
    isoscales(double h, double w) {
        height = h;
        width = w;
    }
    double area(double height, double width) {
        return height*width*0.5;
    }
    void show() {
        cout<<"isoscales: "<<area(height,width)<<endl;
    }
};
int main() {
    rectangle r(9.8, 7.8);
    isoscales s(9.8, 7.8);
    r.show();
    s.show();

 return 0;
}