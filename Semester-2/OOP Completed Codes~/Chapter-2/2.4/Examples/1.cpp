#include <iostream>
using namespace std;
class MyClass
{
    int a;
public:
    MyClass(int x);
    int get();
};
MyClass::MyClass(int x)
{
    a = x;
}
int MyClass::get()
{
    return a;
}
int main() {
    MyClass ob(120);
    MyClass *p;
    p = &ob;
    cout << "Value using object: " << ob.get() << endl;
    cout << "Value using pointer: " << p->get() << endl;
    return 0;
}