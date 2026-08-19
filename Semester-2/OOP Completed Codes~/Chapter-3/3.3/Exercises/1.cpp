#include <iostream>
using namespace std;
class Who {
private:
    char who;
    public:
    Who(char who) {
        cout << "Constructing who #" << who << endl;
        this->who = who;
    }
    ~Who() {
        cout << "Destructing who #" << who << endl;
    }
};

int main () {
    Who ob1('a'), ob2('b');
}