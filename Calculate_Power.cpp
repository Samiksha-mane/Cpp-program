#include <iostream>
using namespace std;

// Function to calculate power without using exponent
double powerWithoutExponent(double base, double times) 
{
    double result = 1.0;
    if (times < 0) 
	{
        for (int i = 0; i < -times; i++) 
		{
            result /= base;
        }
    } 
	else 
	{
        for (int i = 0; i < times; i++) 
		{
            result *= base;
        }
    }
    return result;
}

int main() 
{
    double base, times;
    
    // Taking input from user
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter times to multiply: ";
    cin >> times;
    
    // Calculating power
    double result = powerWithoutExponent(base, times);
    
    // Displaying result
    cout << base << " multiplied " << times << " times is: " << result << endl;
    
    return 0;
}

