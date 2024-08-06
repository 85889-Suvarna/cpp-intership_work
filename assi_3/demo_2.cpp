//Question 2: 
//create Address class having data members cityName ,stateName , Pincode and following functions

//	AcceptAddress ();
//	PrintAddress ();

//Create a class Student having  data member as name , courseName , Home-address and following functions.
	
	//AcceptStudentData();
	//PrintStudentData();

    #include<iostream>
    #include<string>
    using namespace std;

    class Address{
        string cityname;
        string stateName;
        int pincode;

     public:
    void AcceptDate() {
        cout << "Enter cityname: ";
        cin >> cityname;
        cout << "Enter statename: ";
        cin >> stateName;
        cout << "Enter pincode: ";
        cin >> pincode;
    }
       void PrintDate() const {
        cout << cityname << "/" << stateName << "/" <<pincode << endl;
    }
};
class student {
private:
    string name;
    string courcename;
    Address home_address; // Association with TDate
public:
    void AcceptstudentData() {
        cout << "Enter name: ";
        //cin.ignore(); // To ignore any newline character left in the input buffer
        //getline(cin, name);
        cin >> name;
        cout << "Enter courcename: ";
        cin >> courcename;
        cout << "Enter home_address:" <<endl;
        home_address.AcceptDate();
    }

    void PrintstudentData() {
        cout << "Name: " << name <<endl;
        cout << "courcename: " << courcename << endl;
        cout << "enter the address: ";
        home_address.PrintDate();
    }
};
int main() {
    student s1;
    s1.AcceptstudentData();
    s1.PrintstudentData();
    return 0;
}



    