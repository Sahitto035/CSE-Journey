#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int;

    if(!p){
        cout << "Allocation error\n";
        return 1;
    }

    for(int i=0; i<5; i++) {
        p[i] = i;
    }

    for(int i=0; i<5; i++){
        cout << "Integer at p[" << i << "]: " << p[i] << endl;
    }

    delete p;

    return 0;
}
