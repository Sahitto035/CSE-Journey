 #include <iostream>
#include <cstring>

using namespace std;
class Strtype
{
    char *p;
    int len;
public:
    Strtype(char *s){
        int l ;
        l = strlen(s)+1;
        p = new char [l];
        if(!p)
        {
            cout << "Allocation error\n";
            exit(1);
        }
        len = l;
        strcpy(p, s);
    }
    ~Strtype()
    {cout << "Freeing " << p << endl;
        delete [] p;
    }

    char *get() {
        return p;
    }
    Strtype &operator=(Strtype &ob){
        if(len < ob.len){
            delete [] p;
            p = new char (ob.len);
            if(!p){
                cout << "Allocation error\n";
                exit(1);
            }
        }
        len = ob.len;
        strcpy(p, ob.p);
        return *this;
    }
    char &operator[](int i){
        if(i<0 || i>len-1){
            cout << "Index value of " << i << " is out-of-bounds." << endl;
            exit(1);
        }
        return p[i];
    }
};

int main()
{
    Strtype a("Hello"), b("World");
    cout << a.get() << endl;
    cout << b.get() << endl;

    a = b;
    cout << a.get() << endl;
    cout << b.get() << endl;

    cout << a[0] << a[1] << a[2] << endl;

    a[0] = 'X';
    a[1] = 'Y';
    a[2] = 'Z';
    cout << a.get() << endl;
    return 0;
}