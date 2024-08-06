//2> Write a .cpp file having a employee class contains
//empID,empName,empSalary,and two function AcceptData and 
//printDate . and call these function in main()



#include <iostream>
#include <string>
using namespace std;


class Employee {
private:
    int empID;
    string empName;
    double empSalary;


public:
     void AcceptData() {
        cout << "Enter Employee ID: ";
        cin >> empID;

          cout << "Enter Employee Name: ";
        cin>>empName;

        cout << "Enter the EmployeeSalary:";
        cin>> empSalary;
     }
void PrintData() {
        cout << "Employee ID: " << empID ;
        cout << "Employee Name: " << empName ;
        cout << "Employee Salary: " << empSalary ;
    }
        

};
int main() {
    Employee emp;
    emp.AcceptData();
    emp.PrintData();
    return 0;
}