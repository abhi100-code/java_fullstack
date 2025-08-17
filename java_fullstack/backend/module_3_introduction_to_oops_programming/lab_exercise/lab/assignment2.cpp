//Variables and Constants

#include <iostream>
using namespace std;

int main() {
    // Constant declaration
    const float PI = 3.14159; 

    // Variable declarations 
    int radius = 5;             
    float area;                 
    char grade = 'A';          
    string name = "Circle";     
    bool isRound = true;        

    area = PI * radius * radius;

    cout << "Shape Name: " << name << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is it round? " << isRound << endl;

    
}


