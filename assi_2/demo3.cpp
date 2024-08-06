//Q3 :Write a class of  cylinder using following members

//Data members:
//	height,radius,volume
//member function:
//cylinder()
//cylinder(height,radius)
//setHeight(int h)
//setRadius(int r)
//getHeight()
//getRadius()
//CalculateVolume();
//getVolume()
#include <iostream>
using namespace std;

class Cylinder {
private:
    double height;
    double radius;
    double volume;

public:
    // Default constructor
    Cylinder() : height(1), radius(1), volume(0) {}

    // Parameterized constructor
    Cylinder(double h, double r) : height(h), radius(r), volume(0) {}

    // Setters
    void setHeight(double h) {
        height = h;
        CalculateVolume();
    }

    void setRadius(double r) {
        radius = r;
        CalculateVolume();
    }

    // Getters
    double getHeight() {
        return height;
    }

    double getRadius() {
        return radius;
    }

    // Function to calculate the volume of the cylinder
    void CalculateVolume() {
        volume = 3.141592653589793238 * radius * radius * height; // πr²h
    }

    // Function to get the volume of the cylinder
    double getVolume() {
        return volume;
    }

    // Function to accept data from the user
    void acceptData() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter radius: ";
        cin >> radius;
        CalculateVolume();
    }

    // Function to print cylinder data
    void printData() {
        cout << "Height: " << height << endl;
        cout << "Radius: " << radius << endl;
        cout << "Volume: " << volume << endl;
    }
};

int main() {
    Cylinder c1; // Default constructor
    c1.printData();

    Cylinder c2(10, 5); // Parameterized constructor
    c2.printData();

    c2.setHeight(12); // Set height
    c2.setRadius(6);  // Set radius
    c2.printData();

    cout << "Height: " << c2.getHeight() << endl;
    cout << "Radius: " << c2.getRadius() << endl;
    cout << "Volume: " << c2.getVolume() << endl;

    // Accept data from the user
    Cylinder c3;
    c3.acceptData();
    c3.printData();

    return 0;
}
