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
    Letters ltr[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    for (int i = 0; i < 10; i++) {
        cout << ltr[i].get_ch() << endl;
    }
    return 0;
}