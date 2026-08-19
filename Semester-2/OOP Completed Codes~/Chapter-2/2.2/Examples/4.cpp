#include <iostream>
using namespace std;
class MyClass
{
    int i, j;
public:
    MyClass(int a, int b);
    void show();
};
MyClass::MyClass(int a, int b)
{
    cout << "In constructor" << endl;
    i = a;
    j = b;
}

void MyClass::show()
{
    cout << i << " " << j << endl;
}
int main()
{
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    MyClass ob(x, y);
    ob.show();
    return 0;
}