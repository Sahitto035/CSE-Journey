#include <cstring>
#include <iostream>
using namespace std;

class Strtype {
private:
    char* p;
    int len;
public:
    Strtype() {
        this->p = new char[255];
        if (!this->p) {
            cout << "Error allocating memory" << endl;
            exit(1);
        }
        *p = '\0';
        this->len = 255;
    }
    Strtype(char* p, int len) {
        if (strlen(p) >= this->len) {
            cout << "Error allocating memory" << endl;
            exit(1);
        }
        this->p = new char[len];
        if (!this->p) {
            cout << "Error allocating memory" << endl;
            exit(1);
        }
        strcpy(this->p, p);
        this->len = len;
    }

    char* getString() {
        return this->p;
    }
    int getLen() {
        return this->len;
    }
};

int main() {
    Strtype s1;
    Strtype s2("Testing", 50);

    cout << "s1: " << s1.getString() << "  len: " << s1.getLen() << endl;
    cout << "s2: " << s2.getString() << "  len: " << s2.getLen() << endl;

    return 0;
}