#include <iostream>
using namespace std;
class MyClass {
private:
    int a, b;
public:
    MyClass() {
        this->a = this->b = 0;
    }
    MyClass(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int add() {
        return this->a + this->b;
    }
};
int main() {
    MyClass obj(10, 20);
    cout << obj.add() << endl;
}