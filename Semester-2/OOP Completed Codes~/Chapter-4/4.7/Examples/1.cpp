#include <iostream>
using namespace std;

class MyClass{
private:
    int who;
public:
    MyClass(int n){
        who = n;
        cout << "Constructing " << who << endl;
    }
    ~MyClass() {
        cout << "Destructing " << who << endl;
    }
    int id() {
        return who;
    }
};

void f(MyClass o){
    cout << "Received " << o.id() << endl;
}

int main()
{
    MyClass x(1);

    f(x);

    return 0;
}
