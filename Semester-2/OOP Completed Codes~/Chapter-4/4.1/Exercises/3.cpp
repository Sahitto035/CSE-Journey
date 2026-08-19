#include <iostream>
using namespace std;
class Letters{
private:
    char ch;
public:
    Letters(char ch) {
        this->ch = ch;
    }
    char get_ch() {
        return ch;
    }
};
int main() {
    Letters ltr[10] = {
                        Letters('A'),
                        Letters('B'),
                        Letters('C'),
                        Letters('D'),
                        Letters('E'),
                        Letters('F'),
                        Letters('G'),
                        Letters('H'),
                        Letters('I'),
                        Letters('J')};

    for (int i = 0; i < 10; i++) {
        cout << ltr[i].get_ch() << endl;
    }
    return 0;
}