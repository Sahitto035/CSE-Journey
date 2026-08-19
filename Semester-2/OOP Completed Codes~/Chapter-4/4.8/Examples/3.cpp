#include <iostream>
using namespace std;

class Array
{
    int size;
    char *p;
public:
    Array(int num){
        p = new char [num];
        if(!p)
        {
            cout << "Allocation error" << endl;
            exit(1);
        }
        size = num;
    }
    ~Array() {
        delete [] p;
    }
    char &put(int i){
        if(i<0 || i>=size){
            cout << "Bounds error!!!" << endl;
            exit(1);
        }
        return p[i];
    }

    char get(int i){
        if(i<0 || i>=size)
        {
            cout << "Bounds error!!!" << endl;
            exit(1);
        }
        return p[i];
    }
};

int main()
{
    Array a(10);
    a.put(3) = 'X';
    a.put(2) = 'R';
    cout << a.get(3) << a.get(2);
    cout << endl;

    a.put(11) = '!';

    return 0;
}
