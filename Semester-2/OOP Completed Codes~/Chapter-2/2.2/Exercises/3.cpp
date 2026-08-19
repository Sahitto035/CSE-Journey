# include <iostream>
using namespace std;
class box
{
double lenth, weidth, height;
double volume ;
public :
box ( double l, double w, double h);
void vol ();
};
box :: box ( double l, double w, double h)
{
lenth = l;
weidth = w;
height = h;
volume = lenth * weidth * height;
}
void box :: vol ()
{
cout << " Volume is: " << volume << endl;
}
int main () {
    box x(2.9 , 5.47 , 8.07) , y(1.0 , 2.9 , 3.5) ;
    x.vol ();
    y.vol ();
    return 0;
}