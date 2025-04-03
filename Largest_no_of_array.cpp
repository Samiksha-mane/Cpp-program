#include <iostream>
using namespace std;

int findLargest(int arr[], int size) 
{
    int max = arr[0]; 

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];  
        }
    }
    return max;
}

int main() 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    cout << "The largest element is: " << findLargest(arr, n) << endl;
    return 0;
}

