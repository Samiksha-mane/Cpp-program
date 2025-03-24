#include <iostream>
using namespace std;

// Defining a structure for Complex numbers
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

int main() {
    Complex num1, num2, sum;

    // Taking input for the first complex number
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> num1.real >> num1.imag;

    // Taking input for the second complex number
    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> num2.real >> num2.imag;

    // Adding the two complex numbers
    sum = addComplex(num1, num2);

    // Displaying the result
    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}

