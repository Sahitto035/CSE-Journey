#include <iostream>
using namespace std;
const int SIZE = 5;

class Arraytype{
private:
    int a[SIZE];
public:
    Arraytype()
    {
        int i;
        for(i=0; i<SIZE; i++)
            a[i] = i;
    }
    int &operator[](int i){
        if(i<0 || i>SIZE-1)
        {
            cout << "Index value of " << i << " is out of bounds." << endl;
            exit(1);
        }
        return a[i];
    }
};

int main() {
    Arraytype ob;

    for(int i=0; i<SIZE; i++) {
        cout << ob[i] << " ";
    }
    cout << endl;

    ob[SIZE+100] = 99;

    return 0;
}