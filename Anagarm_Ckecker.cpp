#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Function to convert string to lowercase manually
string toLowerCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

// Function to check if two strings are anagrams
bool areAnagrams(string str1, string str2) {
    // Convert both strings to lowercase
    str1 = toLowerCase(str1);
    str2 = toLowerCase(str2);

    // Sort the strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;

    // Read strings from the user
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        cout << "\nThe strings are anagrams of each other." << endl;
    } else {
        cout << "\nThe strings are not anagrams of each other." << endl;
    }

    return 0;
}

