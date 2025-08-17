//Class for a Simple Calculator

#include <iostream>
using namespace std;

class Calculator {
public:
    // Addition
    float add(float a, float b) {
        return a + b;
    }

    // Subtraction
    float subtract(float a, float b) {
        return a - b;
    }

    // Multiplication
    float multiply(float a, float b) {
        return a * b;
    }

    // Division
    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc; 

    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operations using the object
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

}

