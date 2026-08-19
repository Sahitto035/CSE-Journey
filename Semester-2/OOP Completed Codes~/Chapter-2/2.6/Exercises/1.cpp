 # include <iostream>
using namespace std;

inline int absolute(int n)
{
    cout << "In integer abs (): ";
    return n <0 ? -n : n;
}

inline long absolute(long n)
{
    cout << "In long abs (): ";
    return n <0 ? -n : n;
}

inline double absolute(double n)
{
    cout << "In double abs (): " ;
    return n <0 ? -n : n;
}
int main ()
{
    cout << " Absolute value of -10: " << absolute (-10) << endl;
    cout << " Absolute value of -10L: " << absolute (-10L) << endl;
    cout << " Absolute value of -10.01: " << absolute (-10.01) << endl;
    return 0;
}

