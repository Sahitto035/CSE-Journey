#include<iostream>
#include<cctype>
using namespace std;
char min(char a, char b);
int min(int a, int b);
double min(double a, double b);

int main() {
    cout << "Min is: " << min('x', 'a') << "\n";
    cout << "Min is: " << min(10,20) << "\n";
    cout << "Min is: " << min(0.2234, 99.2) << "\n";

    return 0;
}
char min(char a, char b) {
    return tolower(a) < tolower(b) ? a : b;
}

int min(int a, int b) {
    return a < b ? a:b;
}
double min(double a, double b) {
    return a<b ? a:b;
}