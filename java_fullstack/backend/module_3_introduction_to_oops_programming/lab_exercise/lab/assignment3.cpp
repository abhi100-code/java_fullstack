//Type Conversion
#include <iostream>
using namespace std;

int main() {
    int intValue = 10;
    float floatValue;

    floatValue = intValue;

    cout << "Implicit Conversion:" << endl;
    cout << "Integer Value: " << intValue << endl;
    cout << "Converted Float Value: " << floatValue << endl;

    float originalFloat = 9.87;
    int convertedInt;

    convertedInt = (int)originalFloat;  

    cout << "\nExplicit Conversion:" << endl;
    cout << "Original Float Value: " << originalFloat << endl;
    cout << "Converted Integer Value: " << convertedInt << endl;

}

