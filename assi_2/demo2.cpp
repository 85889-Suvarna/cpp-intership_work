//Q2> create TDate class having data member day ,month , year
//nd following functions

//TDate();
//TDate(int day,int month,int year);
//AcceptDate();
//PrintDate_dd-mm-yyyy();    //Ex = 2-5-2022
//PrintDate_dd-month-yyyy(); //Ex = 2-May-2022
//bool ValidateDate();
#include <iostream>
#include <string>
using namespace std;

class TDate {
private:
    int day;
    int month;
    int year;

public:
    TDate() : day(1), month(1), year(2000) {}

    TDate(int d, int m, int y) : day(d), month(m), year(y) {}

    void AcceptDate() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void PrintDate_dd_mm_yyyy() {
        cout << day << "-" << month << "-" << year << endl;
    }

    void PrintDate_dd_month_yyyy() {
        const string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        cout << day << "-" << months[month - 1] << "-" << year << endl;
    }

    bool ValidateDate() {
        if (year < 1) return false;
        if (month < 1 || month > 12) return false;
        if (day < 1 || day > 31) return false;

        bool leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

        if (month == 2) {
            if (leapYear && day > 29) return false;
            if (!leapYear && day > 28) return false;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30) return false;
        }

        return true;
    }
};

int main() {
    TDate date1;
    TDate date2(2, 5, 2022);

    date1.AcceptDate();

    cout << "Date1 (dd-mm-yyyy): ";
    date1.PrintDate_dd_mm_yyyy();

    cout << "Date1 (dd-month-yyyy): ";
    date1.PrintDate_dd_month_yyyy();

    if (date1.ValidateDate()) {
        cout << "Date1 is valid." << endl;
    } else {
        cout << "Date1 is invalid." << endl;
    }

    cout << "Date2 (dd-mm-yyyy): ";
    date2.PrintDate_dd_mm_yyyy();

    cout << "Date2 (dd-month-yyyy): ";
    date2.PrintDate_dd_month_yyyy();

    if (date2.ValidateDate()) {
        cout << "Date2 is valid." << endl;
    } else {
        cout << "Date2 is invalid." << endl;
    }

    return 0;
}
