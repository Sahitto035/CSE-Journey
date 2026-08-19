#include <iostream>
#include <cstring>
using namespace std;

class strtype {
private:
    char* pointer;
    int len;
    public:
    strtype(char* pointer) {
        len = strlen(pointer);
        this -> pointer = (char*) malloc(len + 1);
        if (!this -> pointer) {
            cout << "Allocaton error" << endl;
            exit(1);
        }
        strcpy(this -> pointer, pointer);
    }
    ~strtype() {
        cout << "Freeing memory" << endl;
        free(this->pointer);
    }
    void show() {
        cout << this->pointer << " -length: " << this->len << endl;
    }
};

int main () {
    strtype s1("test"), s2("test 2");
    s1.show();
    s2.show();

    s2 = s1;
    s1.show();
    s1.show();

    return 0;
}