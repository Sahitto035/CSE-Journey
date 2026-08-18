#include<bits/stdc++.h>
using namespace std;

int main() {
    int q1, q2, q3;
    bool valid = false;

    while (!valid) {
        cout << "Enter the quantities for 3 products: ";
        cin >> q1 >> q2 >> q3;
        try {
            if (q1 <= 0 || q1 > 100 || q2 > 100 || q2 <= 0 || q3 <= 0 || q3 > 100) {
                throw "Invalid quantity! Quantity must be between 1 and 100.";
            }
            valid = true;
            cout << "Quantities accepted: " << q1 << ", " << q2 << ", " << q3 <<endl;
        }
        catch (const char* error) {
            cout << "Error: " << error << "Please enter valid quantities again.\n" << endl;
        }
    }
    return 0;
}