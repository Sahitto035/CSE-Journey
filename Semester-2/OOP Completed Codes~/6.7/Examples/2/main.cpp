#include <iostream>
using namespace std;
const int SIZE = 5;

class Arraytype{
private:
    int a[SIZE];
public:
    Arraytype(){
        int i;
        for(i=0; i<SIZE; i++) {
            a[i] = i;
        }
    }

    int &operator[](int i){
        return a[i];
    }
};

int main(){
    Arraytype ob;
    int i;

    for(i=0; i<SIZE; i++) {
        cout << ob[i] << " ";
    }
    cout << endl;

    for(i=0; i<SIZE; i++) {
        ob[i] = ob[i]+10;
    }
    for(i=0; i<SIZE; i++) {
        cout << ob[i] << " ";
    }
    return 0;
}