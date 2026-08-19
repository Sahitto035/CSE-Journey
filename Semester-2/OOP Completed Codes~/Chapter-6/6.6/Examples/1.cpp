#include <iostream>
#include <cstring>
using namespace std;

class Strtype {
private:
    char* p;
    int len;
public:
    Strtype(char* s) {
        int l = strlen(s) + 1;
        p = new char[l];
        if (!p) {
             cout << "Memory allocation failed." << endl;
        }
        len = l;
        strcpy(p, s);
    }
    ~Strtype() {
        cout << "Freeing " << p << endl;
        delete[] p;
    }
    char* get() {
        return p;
    }

    Strtype& operator=(Strtype& s) {
        if (len < s.len) {
            delete[] p;
            p = new char[s.len];
            if (!p) {
                cout << "Memory allocation failed." << endl;
            }
        }
        len = s.len;
        strcpy(p, s.p);
        return *this;
    }
};

int main() {
    Strtype a("Hello"), b("World");

    cout << a.get() << endl;
    cout << b.get() << endl;

    a = b;
    cout << a.get() << endl;
    cout << b.get() << endl;

    return 0;
}