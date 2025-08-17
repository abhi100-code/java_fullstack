//Inheritance Example

#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;

public:
    void getStudentData() {
        getPersonData();  // Reusing base class method
        cout << "Enter Student ID: ";
        cin >> studentID;
    }

    void displayStudentData() {
        displayPersonData();  // Reusing base class method
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void getTeacherData() {
        getPersonData();  // Reusing base class method
        cout << "Enter subject taught: ";
        cin >> subject;
    }

    void displayTeacherData() {
        displayPersonData();  // Reusing base class method
        cout << "Subject: " << subject << endl;
    }
};

// Main function
int main() {
    cout << "--- Enter Student Info ---" << endl;
    Student s;
    s.getStudentData();
    cout << "\n--- Student Details ---" << endl;
    s.displayStudentData();

    cout << "\n--- Enter Teacher Info ---" << endl;
    Teacher t;
    t.getTeacherData();
    cout << "\n--- Teacher Details ---" << endl;
    t.displayTeacherData();

}

