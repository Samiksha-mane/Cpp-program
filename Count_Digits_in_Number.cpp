#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    do {
        count++;
        num /= 10;
    } while (num != 0);

    return count;
}

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Number of digits: " << countDigits(num) << endl;

    return 0;
}

