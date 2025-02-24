#include <iostream>
#include <string>
using namespace std;

void reverseString(const string &str) 
{
	int i;
    for ( i = str.length() - 1; i >= 0; i--) 
	{
        cout << str[i];
    }
    cout << endl;
}

int main() 
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    cout << "Reversed string: ";
    reverseString(input);
    
    return 0;
}

