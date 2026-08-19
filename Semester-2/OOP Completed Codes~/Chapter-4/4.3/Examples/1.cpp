#include <iostream>
#include <cstring>
using namespace std;
class Inventory {
private:
    char item[20];
    double cost;
    int onHand;
public:
    Inventory() {
        cost = 0;
        onHand = 0;
    }
    Inventory(char* item, double cost, int onHand) {
        strcpy(this->item, item);
        this->cost = cost;
        this->onHand = onHand;
    }
    void show() {
        cout << item << ": $" << cost << " On Hand: " << onHand << endl;
    }
};
int main() {
    Inventory obj("Wrench", 4.95, 4);
    obj.show();
    return 0;
}