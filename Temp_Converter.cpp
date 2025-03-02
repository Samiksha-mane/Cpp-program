#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit and Kelvin
void celsiusToOther(float c) 
{
    cout << "Fahrenheit: " << (c * 9 / 5) + 32 << "°F" << endl;
    cout << "Kelvin: " << c + 273.15 << "K" << endl;
}

// Function to convert Fahrenheit to Celsius and Kelvin
void fahrenheitToOther(float f) 
{
    cout << "Celsius: " << (f - 32) * 5 / 9 << "°C" << endl;
    cout << "Kelvin: " << ((f - 32) * 5 / 9) + 273.15 << "K" << endl;
}

// Function to convert Kelvin to Celsius and Fahrenheit
void kelvinToOther(float k) 
{
    cout << "Celsius: " << k - 273.15 << "°C" << endl;
    cout << "Fahrenheit: " << ((k - 273.15) * 9 / 5) + 32 << "°F" << endl;
}

int main() 
{
    int choice;
    float temp;

    cout << "Temperature Converter" << endl;
    cout << "1. Convert Celsius" << endl;
    cout << "2. Convert Fahrenheit" << endl;
    cout << "3. Convert Kelvin" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    switch (choice) 
	{
        case 1: celsiusToOther(temp); break;
        case 2: fahrenheitToOther(temp); break;
        case 3: kelvinToOther(temp); break;
        default: cout << "Invalid choice!" << endl;
    }

    return 0;
}

