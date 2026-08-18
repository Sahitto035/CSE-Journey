#include<bits/stdc++.h>
using namespace std;

int main() {
    int age1, age2, age3;
    bool valid = false;

    while (!valid) {
        cout << "Enter three ages: ";
        cin >> age1 >> age2 >> age3;
        try {
            if (age1 < 0 || age1 > 120 || age2 < 0 || age2 > 120 || age3 < 0 || age3 > 120) {
                throw "Ivalid age! All agges must be between 0 and 120.";
            }
            valid = true;
            cout << "Successfully entered: " << age1 << ", " << age2 << ", " << age3 << endl;

        }
        catch (const char* msg) {
            cout << "Error:  " << msg << "Pleast try again.\n" << endl;
        }
    }
    return 0;
}