//Operator Demonstration
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    bool result;

    // -------- Arithmetic Operators --------
    cout << "=== Arithmetic Operators ===" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // -------- Relational Operators --------
    cout << "\n=== Relational Operators ===" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // -------- Logical Operators --------
    cout << "\n=== Logical Operators ===" << endl;
    result = (a > 0 && b > 0);  // true if both are true
    cout << "a > 0 && b > 0: " << result << endl;

    result = (a > 0 || b < 0);  // true if one is true
    cout << "a > 0 || b < 0: " << result << endl;

    result = !(a == b);         // true if a != b
    cout << "!(a == b): " << result << endl;

    // -------- Bitwise Operators --------
    cout << "\n=== Bitwise Operators ===" << endl;
    cout << "a & b = " << (a & b) << endl;   
    cout << "a | b = " << (a | b) << endl;   
    cout << "a ^ b = " << (a ^ b) << endl;   
    cout << "~a = " << (~a) << endl;         
    cout << "a << 1 = " << (a << 1) << endl; 
    cout << "a >> 1 = " << (a >> 1) << endl; 

}

