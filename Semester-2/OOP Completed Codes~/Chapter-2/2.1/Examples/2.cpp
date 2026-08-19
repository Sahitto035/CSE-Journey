#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define SIZE 25
class Strtype
{
    char *p;
    int len;
public:
    Strtype(); // constructor
    ~Strtype(); // destructor
    void set(char *ptr);
    void show();
};
// Initialize a string object.
Strtype::Strtype()
{
    p = (char *) malloc(SIZE);
    if(!p)
    {
        cout << "Allocation error\n";
        exit(1);
    }
    *p = '\0';
    len = 0;
}
// Free memory when destroying string object.
Strtype::~Strtype()
{
    cout << "Freeing p\n";
    free(p);
}
void Strtype::set(char *ptr)
{
    if(strlen(p) >= SIZE)
    {
        cout << "String too big\n";
        return;
    }
    strcpy(p, ptr);
    len = strlen(p);
}
void Strtype::show()
{
    cout << p << "-length: " << len;
    cout << "\n";
}
int main()
{
    Strtype s1, s2;
    s1.set("This is a test.");
    s2.set("I like C++.");
    s1.show();
    s2.show();
    return 0;
}