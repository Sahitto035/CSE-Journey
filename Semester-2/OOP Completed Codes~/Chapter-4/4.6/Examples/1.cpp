#include <iostream>
using namespace std;

void swapargs(int &x, int &y){
    int t;

    t = x;
    x = y;
    y = t;
}

int main()
{
    int i, j;

    i = 10;
    j = 19;

    cout << "i: " << i << ", " << "j: " << j << endl;

    swapargs(i, j);

    cout << "After swapping: ";

    cout << "i: " << i << ", "  << "j: " << j << endl;

    return 0;
}
