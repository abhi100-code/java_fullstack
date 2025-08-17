//String Palindrome Check

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversed = "";
    
    // Input string
    cout << "Enter a string: ";
    cin >> str;

    // Reverse the string manually
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }

    // Check if original and reversed strings are the same
    if (str == reversed) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

}

