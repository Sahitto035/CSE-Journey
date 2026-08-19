#include <iostream>
using namespace std;
#define SIZE 10

class Stack {
private:
    char stck[SIZE];
    int tos;
public:
    Stack() {
        cout << "Constructing Stack" << endl;
        tos = 0;
    }
    void push(char ch) {
        if (tos == SIZE) {
            cout << "Stack is full" << endl;
            return;
        }
        stck[tos] = ch;
        tos++;
    }
    char pop() {
        if (tos == 0) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        tos --;
        return stck[tos];
    }
};

void showStack(Stack object) {
    char c;

    while (c = object.pop ())
        cout << c << endl;
}

int main() {
    Stack s1;
    int i;

    s1.push('A');
    s1.push('B');
    s1.push('C');

   showStack(s1);

    cout << "s1 stack stll have:" << endl;

    for (int i = 0; i<3; i++) {
        cout << "Pop s1: " << s1.pop() << endl;
    }


}