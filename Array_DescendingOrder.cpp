#include <iostream>
using namespace std;

// Function to sort an array in descending order
void sortDescending(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // Swap if the current element is smaller
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Taking input for array size
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declaring the array

    // Taking input for array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting the array in descending order
    sortDescending(arr, n);

    // Displaying the sorted array
    cout << "Array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

