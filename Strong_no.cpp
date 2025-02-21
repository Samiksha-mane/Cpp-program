#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) 
{
	int i;
    int fact = 1;
    for ( i = 1; i <= n; i++) 
	{
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a Strong number
int isStrong(int num) 
{
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isStrong(num))
        cout << num << " is a Strong number." << endl;
    else
        cout << num << " is not a Strong number." << endl;
    
    return 0;
}

