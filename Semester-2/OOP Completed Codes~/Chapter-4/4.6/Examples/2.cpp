#include <iostream>
#include <cmath>
using namespace std;

void Round(double &num){
    double frac;
    double val;

    frac = modf(num, &val);

    if(frac < 0.5) {
        num = val;
    }else {
        num = val+1.0;
    }
}


int main()
{
    double i = 100.4;

    cout << i << " rounded is ";
    Round(i);
    cout << i << endl;

    i = 109.9;
    cout << i << " rounded is ";
    Round(i);
    cout << i << endl;

    return 0;
}