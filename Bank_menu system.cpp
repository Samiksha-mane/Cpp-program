#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    int choice;
    string accountNumber;
    string accountHolderName;
    double balance = 0.0;
    string transactionDates[3];
    string transactionDescriptions[3];
    double transactionAmounts[3];

    do {
        cout << "Banking System Menu" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Print Statement" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                cout << "Enter account number: ";
                cin >> accountNumber;
                cout << "Enter account holder name: ";
                cin.ignore();
                getline(cin, accountHolderName);
                cout << "Account created successfully!" << endl;
                break;

            case 2:
                cout << "Enter transaction date: ";
                cin >> transactionDates[0];
                cout << "Enter transaction description: ";
                cin.ignore();
                getline(cin, transactionDescriptions[0]);
                cout << "Enter transaction amount: ";
                cin >> transactionAmounts[0];
                balance += transactionAmounts[0];
                cout << "Deposit successful!" << endl;
                break;

            case 3:
                cout << "Enter transaction date: ";
                cin >> transactionDates[1];
                cout << "Enter transaction description: ";
                cin.ignore();
                getline(cin, transactionDescriptions[1]);
                cout << "Enter transaction amount: ";
                cin >> transactionAmounts[1];
                balance += transactionAmounts[1];
                cout << "Withdrawal successful!" << endl;
                break;

            case 4:
                cout << "Current balance: " << balance << endl;
                break;

            case 5:
                cout << fixed << setprecision(2);
                cout << setw(20) << left << "Account Number:" << accountNumber << endl;
                cout << setw(20) << left << "Account Holder Name:" << accountHolderName << endl;
                cout << setw(20) << left << "Current Balance:" << balance << endl;
                cout << setw(20) << left << "Transactions:" << endl;

                for (int i = 0; i < 2; i++) 
				{
                    cout << setw(15) << left << transactionDates[i] << setw(20) << left << transactionDescriptions[i] << transactionAmounts[i] << endl;
                }
                break;

            case 6:
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}

