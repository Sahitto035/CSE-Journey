# include <iostream>
# include <ctime>
using namespace std;
class t_and_d
{
    time_t systime ;
public :
t_and_d ( time_t t);
    void show ();
};
t_and_d :: t_and_d ( time_t t)
{
    systime = t;
}
void t_and_d :: show ()
{
    cout << ctime (& systime );
}
int main ()
{
    time_t x;
    x = time ( NULL );
    t_and_d ob(x);
    ob. show ();
    return 0;
}