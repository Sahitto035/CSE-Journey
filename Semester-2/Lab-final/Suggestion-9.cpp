#include<bits/stdc++.h>
using namespace std;
int main() {
    double t1, t2, t3;
    bool valid = false;

    while (!valid) {
        cout << "Enter Temp for 3 days (Celcius only): ";
        cin >> t1 >> t2 >> t3;

        try {
            if (t1 < -50 || t1 > 60 || t2 < -50 || t2 > 60 || t3 < -50 || t3 > 60) {
                throw "Invalid temperature! Temperature must be between -50°C and 60°C.";
            }
            valid = true;
            cout << "Temperatures accepted: " << t1 << "°C, " << t2 << "°C, " << t3 << "°C" << endl;
        }
        catch (const char* error) {
            cout << "Error: " << error << "Please enter the temps again.\n" << endl;
        }
    }
    return 0;
}