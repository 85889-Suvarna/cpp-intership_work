//Question 1: create TDate class having data members day ,month , year and following functions

//	AcceptDate();
//	PrintDate();

//Create a class Person having  data member as name , age , date_of_birth and following functions.

//	AcceptPersonData();
//	PrintPersonData();





#include <iostream>
#include <string>
using namespace std;

class TDate {
private:
    int day;
    int month;
    int year;

public:
    void AcceptDate() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void PrintDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person {
private:
    string name;
    int age;
    TDate date_of_birth; // Association with TDate

public:
    void AcceptPersonData() {
        cout << "Enter name: ";
        //cin.ignore(); // To ignore any newline character left in the input buffer
        //getline(cin, name);
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter date of birth:" <<endl;
        date_of_birth.AcceptDate();
    }

    void PrintPersonData() {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age << endl;
        cout << "Date of Birth: ";
        date_of_birth.PrintDate();
    }
};

int main() {
    Person person;
    person.AcceptPersonData();
    person.PrintPersonData();
    return 0;
}
