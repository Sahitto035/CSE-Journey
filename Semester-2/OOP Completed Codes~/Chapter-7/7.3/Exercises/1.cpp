#include <iostream>
#include <cstring>
using namespace std;

class MyBase {
private:
    char str[80];
public:
    MyBase(char* str) {
        strcpy(this->str, str);
    }
    char* getStr() {
        return this->str;
    }
};
class MyDerived : public MyBase {
private:
    int len;
public:
    MyDerived(char* str) : MyBase(str) {
        len = strlen(str);
    }
    int getLen() {
        return len;
    }
    void show() {
        cout << getStr() << endl;
    }
};

int main() {
    MyDerived obj("abcde");
    obj.show();
    cout << obj.getLen() << endl;

    return 0;
}