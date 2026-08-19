#include<iostream>
using namespace std;

void date(char *date);
void date(int month, int day, int year);

int main() {
    date("8/26/99");
    date(8, 26, 99);
    return 0;
}

void date(char *date) {
    cout << "Date: " << date << "\n";
}

void date(int month, int day, int year) {
    cout << "Date: " << month << "/";
    cout << day << "/" << year << "\n";
}