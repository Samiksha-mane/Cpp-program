#include <iostream>
using namespace std;
int isPrime(int num) 
{
    if (num < 2)
        return 0;
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}
int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPrime(number) == 1)
        cout << number << " is a Prime Number.\n";
    else
        cout << number << " is not a Prime Number.\n";
    return 0;
}

