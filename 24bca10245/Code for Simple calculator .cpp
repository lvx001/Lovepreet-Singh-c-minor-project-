#include <iostream>
using namespace std;

// Define a class for the calculator
class Calculator {
private:
    double num1, num2;  // Variables to store two numbers

public:
    // Function to set the values of num1 and num2
    void setValues(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Function to perform addition
    double add() {
        return num1 + num2;
    }

    // Function to perform subtraction
    double subtract() {
        return num1 - num2;
    }

    // Function to perform multiplication
    double multiply() {
        return num1 * num2;
    }

    // Function to perform division
    double divide() {
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        } else {
            return num1 / num2;
        }
    }
};

int main() {
    Calculator calc;  // Create an object of the Calculator class
    double num1, num2;
    int choice;

    cout << "Simple Calculator\n";
    cout << "Enter two numbers:\n";
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;

    // Set the values in the Calculator object
    calc.setValues(num1, num2);

    // Display the operation menu
    cout << "\nChoose operation to perform:\n";
    cout << "1. Add (+)\n";
    cout << "2. Subtract (-)\n";
    cout << "3. Multiply (*)\n";
    cout << "4. Divide (/)\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Perform the chosen operation
    switch(choice) {
        case 1:
            cout << "Result: " << calc.add() << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract() << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply() << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
