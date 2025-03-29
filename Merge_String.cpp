#include <iostream>
#include <string>

using namespace std;

string mergeStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    
    cout << "Enter second string: ";
    getline(cin, str2);
    
    string merged = mergeStrings(str1, str2);
    
    cout << "Merged string: " << merged << endl;
    
    return 0;
}

