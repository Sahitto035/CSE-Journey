#include <iostream>
using namespace std;
const int SIZE = 5;

class Arrytype {
private:
    int array[SIZE];
public:
    Arrytype() {
        for (int i = 0; i < SIZE; i++) {
            array[i] = i;
        }
    }
    int operator[](int index) {
        return array[index];
    }
};

int main() {
    Arrytype ob;
    for (int i = 0; i < SIZE; i++) {
        cout << ob[i] << endl;
    }
    return 0;
}