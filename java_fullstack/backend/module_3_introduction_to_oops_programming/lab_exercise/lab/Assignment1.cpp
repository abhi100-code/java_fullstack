#include <iostream>
using namespace std;

void helloWorld() {
    cout << "\n--- 1. Hello World Program ---\n";
    cout << "Hello, World!" << endl;
}


void basicIO() {
    cout << "\n--- 2. Basic Input/Output ---\n";
    string name;
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}


void areaPOP() {
    cout << "\n--- 3A. POP Style Area ---\n";
    float length, width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Area = " << length * width << endl;
}


class Rectangle {
private:
    float length, width;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void displayArea() {
        cout << "Area = " << length * width << endl;
    }
};

void areaOOP() {
    cout << "\n--- 3B. OOP Style Area ---\n";
    Rectangle rect;
    rect.input();
    rect.displayArea();
}

void sumTwoNumbers() {
    cout << "\n--- 4. Sum of Two Numbers ---\n";
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum = " << a + b << endl;
}


int main() {
    int option;
    do {
        cout << "\n===== C++ Basics Menu =====\n";
        cout << "1. Hello World Program\n";
        cout << "2. Basic Input/Output\n";
        cout << "3. Area using POP\n";
        cout << "4. Area using OOP\n";
        cout << "5. Sum of Two Numbers\n";
        cout << "6. Exit\n";
        cout << "Choose an option (1-6): ";
        cin >> option;

        switch(option) {
            case 1: helloWorld(); break;
            case 2: basicIO(); break;
            case 3: areaPOP(); break;
            case 4: areaOOP(); break;
            case 5: sumTwoNumbers(); break;
            case 6: cout << "Exiting... Thank you!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while(option != 6);

    return 0;
}

