 # include <iostream>
using namespace std;
class pr2;

class pr1{
private:
    int printing ;
public :
    pr1 () {
    printing = 0;
    }
    void set_print (int status ) {
    printing = status ;
    }

    friend int inuse ( pr1 o1 , pr2 o2);
};
class pr2{
private:
    int printing ;
    public :
    pr2 () {
        printing = 0;
    }
    void set_print (int status ) {
        printing = status ;
    }

    friend int inuse ( pr1 o1 , pr2 o2);
};
int inuse (pr1 o1 , pr2 o2){
    if(o1. printing || o2. printing ) {
        return 1;
    }else {
        return 0;
    }
}
int main (){
    pr1 p1;
    pr2 p2;
    if (!inuse(p1 , p2))cout << " Printer idle \n";
    cout << " Setting p1 to printing ...\n";
    p1. set_print (1) ;
    if( inuse (p1 , p2)) {
        cout << "Now printer in use .\n";
    }
    cout << " Turn off p1 ...\n";
    p1. set_print (0) ;
    if (! inuse (p1 , p2)) {
        cout << " Printer idle \n";
    }
    cout << " Turn on p2 ...\n";
    p2. set_print (1) ;
    if(inuse (p1 , p2)) {
        cout << "Now printer in use .\n";
    }
    return 0;
}