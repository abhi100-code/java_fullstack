//Variable Scope

#include <iostream>
using namespace std;

int number = 100;

void globalScope() {
    cout << "Inside globalScope(), global number = " << number << endl;
    number += 50;
    cout << "After modification, global number = " << number << endl;
}

void localScope() {
    int number = 10;  
    cout << "Inside localScope(), local number = " << number << endl;
    number += 5;
    cout << "After modification, local number = " << number << endl;
}

int main() {
    cout << "In main(), global number = " << number << endl;

    globalScope();

    localScope();

    cout << "Back in main(), global number = " << number << endl;

    return 0;
}

