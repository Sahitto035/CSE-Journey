# include <iostream>
using namespace std;

class stack
{
    char * stck ;
    int tos ;
    int size ;
public :
stack (int s);
    ~ stack ();
    void push ( char ch);
    char pop ();
};

stack :: stack (int s)
{
    cout << " Constructing a stack" << endl;
    tos = 0;
    stck = ( char *) malloc (s);
    if (! stck )
    {
        cout << " Allocation error " << endl;
        exit (1) ;
    }
    size = s;
}
stack ::~ stack ()
{
    free ( stck );
}

void stack :: push ( char ch)
{
    if(tos == size )
    {
        cout << " Stack is full " << endl;
        return ;
    }
    stck [tos ] = ch;
    tos ++;
}

char stack :: pop ()
{
    if(tos ==0)
    {
        cout << " Stack is empty " << endl;
        return 0;
    }
    tos --;
    return stck [ tos ];
}
int main ()
{
    stack s1 (10) , s2 (10) ;
    int i;
    s1. push ('a');
    s2. push ('x');
    s1. push ('b');
    s2. push ('y');
    s1. push ('c');
    s2. push ('z');
    for (i=0; i <3; i++)
        cout << "Pop s1: " << s1.pop () << endl;
    for (i=0; i <3; i++)
        cout << "Pop s2: " << s2.pop () << endl;
    return 0;
}