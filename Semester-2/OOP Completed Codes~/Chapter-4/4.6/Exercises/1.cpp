#include <iostream>
using namespace std;

void rneg(int &i){
    i = -i;
}

void pneg(int *i){
    *i = -*i;
}

int main()
{
    int i = 10;
    int j = 20;

    rneg(i);
    pneg(&j);

    cout << i << ' ' << j << endl;

    return 0;
}
