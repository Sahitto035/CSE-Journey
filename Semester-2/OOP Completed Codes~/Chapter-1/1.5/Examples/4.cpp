#include<iostream>
using namespace std;

#define SIZE 10

// Declares a stack class for characters
class stack {
    char stck[SIZE]; // holds the stack
    int tos; // index of top of stack

public:
    void ini(); //initialize stack
    void push(char ch); // push character on stack
    char pop(); // pop character from stack
};

// Initialize the stack
void stack::ini() {
    tos = 0;
}
// push a character.
void stack::push(char ch) {
    if (tos == SIZE) {
        cout << "Stack is full";
        return;
    }
    stck[tos] = ch;
    tos++;
}

// popa character
char stack::pop() {
    if (tos == 0) {
        cout << "Stack is empty";
        return 0;
    }
    tos--;
    return stck [tos];
}
int main() {
    stack s1, s2; // create two stacks
    int i;
    // initialize the stacks
    s1.ini();
    s2.ini();

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i = 0; i < 3; i++)
        cout << "Pop s1: " << s1.pop() << "\n";
    for (i = 0; i < 3; i++)
        cout << "Pop s2: " << s2.pop() << "\n";
    return 0;
}