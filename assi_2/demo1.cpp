//1: Menu driven code
//Write a 4 function calculator by using menu driven code
//by taking  choice from user for calculation
//(Use Enum , while loop , switch )



#include <iostream>
using namespace std;

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    EXIT
};

void displayMenu() {
    cout << "Calculator Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == EXIT) {
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case ADD:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case SUBTRACT:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case MULTIPLY:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case DIVIDE:
                result = divide(num1, num2);
                cout << "Result: " << result << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    cout << "Calculator program terminated." << endl;
    return 0;
}
