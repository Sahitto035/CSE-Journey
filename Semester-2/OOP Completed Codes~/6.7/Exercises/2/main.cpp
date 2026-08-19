#include <iostream>
using namespace std;

class Dynarray{
private:
    int *p;
    int size;
public:
    Dynarray(int s){
        p = new int [s];
        if(!p){
            cout << "Allocation error" << endl;
            exit(1);
        }
        size = s;
    }
    Dynarray &operator=(Dynarray &ob){
        int i;
        if(size!=ob.size){
            cout << "Cannot copy arrays of differing size!" << endl;
            exit(1);
        }
        for(i = 0; i<size; i++)
            p[i] = ob.p[i];
        return *this;
    }
    int &operator[](int i){
        if(i<0 || i>size){
            cout << "Index value of " << i << " is out-of-bounds." << endl;
            exit(1);
        }
        return p[i];
    }
};

int main() {
    int i;
    Dynarray ob1(10), ob2(10), ob3(100);
    ob1[3] = 10;
    i = ob1[3];
    cout << i << endl;
    ob2 = ob1;
    i = ob2[3];
    cout << i << endl;

    ob1 = ob3;

    return 0;
}