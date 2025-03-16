#include <iostream>
using namespace std;

int main() {
    int n;

    // Read the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare the array

    // Read the array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print the array in reverse order
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

