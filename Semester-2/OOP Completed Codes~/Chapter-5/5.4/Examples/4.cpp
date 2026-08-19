#include <iostream>
#include <cctype>
using namespace std;

const int IGONRE = 0;
const int UPPER = 1;
const int LOWER = 2;

void print(char* s, int how = -1) {
    static int oldcase = IGONRE;
    if (how<0) {
        how = oldcase;
    }
    while (*s) {
        switch (how) {
            case UPPER: cout << (char) toupper(*s);
                break;
            case LOWER: cout << (char) tolower(*s);
                break;
            default: cout << *s; break;
        }
        s++;
    }oldcase = how;
}

int main() {
    print("Hello World!\n", IGONRE);
    print("Hello World!\n", UPPER);
    print("Hello World!\n");
    print("Hello World!\n", LOWER);
    print("Thats all\n");

    return 0;
}