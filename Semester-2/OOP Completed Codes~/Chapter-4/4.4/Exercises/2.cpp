# include <iostream>
# include <cstring>
using namespace std;
class Person
{
private:
    char name [40];
    char number [14];
public:
    void store ( char *n, char *num ){
        strcpy (name , n);
        strcpy ( number , num);
}
    void show (){
        cout << name << ": " << number << endl;
    }
};

int main ()
{
    Person *p;
    p = new Person ;
    if (!p)
    {
        cout << " Allocation error .";
        return 1;
    }
    p-> store (" Isaac Newton ", " 926459687 ");
    p-> show ();
    delete p;
    return 0;
}