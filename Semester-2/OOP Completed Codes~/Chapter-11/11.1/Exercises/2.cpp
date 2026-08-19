#include <iostream>
using namespace std;

template <class X>
X minimum(X a, X b){
    if(a<=b) {
        return a;
    }else{
        return b;
    }
}
int main(){

    cout << minimum(12.2, 2.0) << endl;
    cout << minimum(3, 4) << endl;
    cout << minimum("c", "a") << endl;

    return 0;
}