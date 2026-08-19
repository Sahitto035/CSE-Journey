#include <iostream>
using namespace std;

void Xhandler(){
    try{
        throw "hello";
    }
    catch(const char *){
        cout << "Caught const char * inside Xhandler" << endl;
        throw;
    }
}

int main(){
    cout << "start" << endl;

    try{
        Xhandler();
    }
    catch(const char *){
        cout << "Caught const char * inside main" << endl;
    }

    cout << "end";

    return 0;
}
