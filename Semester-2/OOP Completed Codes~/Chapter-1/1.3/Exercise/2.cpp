#include<iostream>
using namespace std;

int main() {
    double feet;

    do {
        cout << "Enter feet(0 to quit): ";
        cin >> feet;

        cout << feet * 12 << "inches\n";
    } while (feet != 0.0);


    return 0;
}