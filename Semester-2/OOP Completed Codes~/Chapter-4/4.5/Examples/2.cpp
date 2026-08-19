#include <iostream>
using namespace std;
class Samp{
private:
    int i, j;
public:
    Samp(int a, int b) {
        i=a; j=b;
    }
    int get_product() {
        return i*j;
    }
};
int main(){
    Samp *p;
    p = new Samp(6, 5);
    if(!p){
        cout << "Allocation error\n";
        return 1;
    }
    cout << "Product: " << p->get_product() << "\n";
    delete p;
    return 0;
}