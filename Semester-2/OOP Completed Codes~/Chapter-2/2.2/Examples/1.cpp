#include <iostream>
using namespace std;
class MyClass
{
    int a, b;
public:
    MyClass(int x, int y);
    void show();
};
MyClass::MyClass(int x, int y)
{
    cout << "In constructor" << endl;;
    a = x;
    b = y;
}
void MyClass::show()
{
    cout << a << " " << b << endl;
}
int main()
{
    MyClass ob(4, 7);
    ob.show();
    return 0;
}