#include <iostream>
using namespace std;

class Num {
public:
    int i;
    Num(int i) {
        this->i = i;
    }
    virtual void showNum() {
        cout << i << endl;
    }
};
class Outhex : public Num {
public:
    Outhex(int i) : Num(i) {}
    void showNum() {
        cout << hex << i << endl;
    }
};
class Outoct : public Num {
public:
    Outoct(int i) : Num(i) {}
    void showNum() {
        cout << oct << i << endl;
    }
};

int main() {
    Outoct O(11);
    Outhex H(11);

    O.showNum();
    H.showNum();

    return 0;
}