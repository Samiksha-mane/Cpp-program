#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;

    // Taking user input
    cout << "Enter a string: ";
    getline(cin, str); // Read full line including spaces

    // Defining vowels for easy comparison
    string vowelSet = "AEIOUaeiou";

    // Loop through each character using a traditional for loop
    for (size_t i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (isalpha(ch)) { // Check if it's a letter
            if (vowelSet.find(ch) != string::npos) { // Check if it's a vowel
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    // Display the result
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}

