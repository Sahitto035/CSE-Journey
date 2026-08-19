#include <iostream>
#include <cstring>
using namespace std;

class Samp {
private:
    char s[80];
public:
    void show() {
        cout << s << endl;
    }
    void set(char* str) {
        strcpy(s, str);
    }
};

Samp input() {
    char s[80];
    Samp str;

    cout << "Enter a string: ";
    cin >> s;
    str.set(s);
    return str;
}

int main() {
    Samp object;
    object = input();
    object.show();

    return 0;
}