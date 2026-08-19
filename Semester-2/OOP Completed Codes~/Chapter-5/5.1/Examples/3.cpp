#include <iostream>
#include<cstdio>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date() {
        this->day = this->month = this->year = 0;
    }
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    Date(char* date) {
        sscanf(date, "%d%*c%d%*c%d", &day, &month, &year);
    }
    void showDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date dayString("15/05/2026");
    Date dayString2("15-05-2026");
    Date dayInt(12, 11, 2026);

    dayString.showDate();
    dayString2.showDate();
    dayInt.showDate();
    return 0;
}