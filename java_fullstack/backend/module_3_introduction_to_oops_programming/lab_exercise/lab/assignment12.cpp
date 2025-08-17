//Array Sum and Average

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100; // Maximum size of the array
    int arr[SIZE];
    int n;
    int sum = 0;
    float average;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
        sum += arr[i];  
    }

    average = static_cast<float>(sum) / n;

    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

}

