#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int main() {
    int a, b, c;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = sum (a, b);
    cout << "Sum is: " << c;

    return 0;
}

/* sum(int a, int b) {
    return a + b;
}*/