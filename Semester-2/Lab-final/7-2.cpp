#include <iostream>
using namespace std;

int main() {
    int age1, age2, age3;
    bool valid = false;

    while (!valid) {
        cout << "Enter three ages: ";
        cin >> age1 >> age2 >> age3;

        try {
            // Check if any age is out of bounds
            if (age1 < 0 || age1 > 120 || age2 < 0 || age2 > 120 || age3 < 0 || age3 > 120) {
                throw "Invalid age! All ages must be between 0 and 120.";
            }

            // If no exception is thrown, the input is valid
            valid = true;
            cout << "Successfully entered: " << age1 << ", " << age2 << ", " << age3 << endl;
        }
        catch (const char* msg) {
            cout << "Error: " << msg << " Please try again.\n" << endl;
        }
    }

    return 0;
}