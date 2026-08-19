#include<iostream>
using namespace std;

int main() {
    double a;
    int b;
    cout << "Enter your Hourly income: ";
    cin >> a;
    cout << "Enter your number of hours of work: ";
    cin >> b;
    double x = a * b;
    cout << "So your grosspay is: " << x << endl;

    return 0;
}