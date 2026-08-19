#include <cstring>
#include <iostream>
using namespace std;

class Strtype {
private:
    char *p;
public:
    Strtype(char *p) {
        int length = strlen(p) + 1;
        this->p = new char[length];
        if (!p) {
            cout << "Allocation error" << endl;
            exit(1);
        }
        strcpy(this->p, p);
    }
    ~Strtype() {
        delete[] this->p;
    }
    char *get() {
        return this->p;
    }
};

void show(Strtype x) {
    char *p = x.get();
    cout << p << endl;
}

int main() {
    Strtype a("Hello"), b("World");
    show(a);
    show(b);

    return 0;
}