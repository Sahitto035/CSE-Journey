// This fragment contins an error;
#include<iostream>
using namespace std;

int main() {
    myclassob1, ob2;

    ob1.a = 10; // ERROR : cannot access private number
    ob2.a = 99; // by non-member function

    cout << ob1.get_a() << '\n';
    cout << ob2.get_a() << '\n';

    return 0;
}