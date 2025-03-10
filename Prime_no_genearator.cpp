#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) 
{
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i <= sqrt(num); i += 6) 
	{
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() 
{
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    if (start > end) 
	{
        cout << "Invalid range! Starting number should be less than or equal to the ending number.\n";
        return 1;
    }

    cout << "Prime numbers between " << start << " and " << end << ":\n";
    for (int i = start; i <= end; i++) 
	{
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

