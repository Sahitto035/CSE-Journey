#include <iostream>
using namespace std;

inline int min(int a, int b)
{
    return a<b ? a : b;
}

inline long min(long a, long b)
{
    return a<b ? a : b;
}

inline double min(double a, double b)
{
    return a<b ? a : b;
}
int main()
{
    cout << min(-10, -83) << endl;
    cout << min(-10.0, -98.1) << endl;
    cout << min(-10L, 12L) << endl;
    return 0;
}