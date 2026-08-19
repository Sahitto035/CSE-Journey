 # include <iostream>
# include <cstring>
using namespace std;
class strtype
{
    char *p;
    int len ;
public :
strtype ( char *ptr )
{
    len = strlen (ptr );
    p = ( char *) malloc (len +1);
    if (!p)
    {
        cout << " Allocation error " << endl;
        exit (1) ;
    }
    strcpy (p, ptr );
}
    ~ strtype ()
{
    cout << " Freeing p" << endl;
    free (p);
}
    void show ()
{
    cout << p << " - lengthj : " << len << endl;
}
};
int main ()
{
    strtype s1(" This is a test ."), s2("I like C++. ");
    s1. show ();
    s2. show ();
    return 0;
}