#include<iostream>
#include<string.h>
using namespace std;

class BankAccount
{
	private :
		string accountHolder;
		int accountNumber;
		string accountType;
		double balance;
	public :
		BankAccount()
		{
			accountHolder="ABC";
			accountNumber=0;
			accountType="Saving";
			balance=0.0;
		}
		BankAccount(string holder,int number,string type,double bal)
		{
			accountHolder = holder;
			accountNumber=number;
			accountType=type;
			balance=bal;
		}
		string getAccountHolder()
		{
			return accountHolder;
		}
			int getAccountNumber()
		{
			return accountNumber;
		}
		string getAccountType()
		{
			return accountType;
		}
		double getbalance()
		{
			return balance;
		}
		void setAccountType(string newType)
		{
			accountType=newType;
		}
		void deposit(double amount)
		{
			if(amount >0)
			{
				balance += amount;
				cout<<"Depositing :"<<amount<<endl;
				cout<<"New Balance :"<<balance<<endl;
			}
			else
			{
				cout<<"Invalid deposit amount!"<<endl;
			}
		}
		void withdraw(double amount)
		{
			if(amount>0 && amount<=balance)
			{
				balance-=amount;
				cout<<"Withdrawing :"<<amount<<endl;
				cout<<"New balance :"<<balance<<endl;
			}
			else
			{
				cout<<"Invalid Amount!"<<endl;
			}
		}
		void displayAccountDetails()
			{
				cout<<"Account Details :"<<endl;
				cout<<"Holder :"<<accountHolder<<endl;
				cout<<"Account Number :"<<accountNumber<<endl;
				cout<<"Type :"<<accountType<<endl;
				cout<<"Balance :"<<balance<<endl;
				cout<<"----------"<<endl;
			}
};
int main()
{
	BankAccount account1("Samiksha Mane",123456,"Saving",5000);
	account1.displayAccountDetails();
	account1.deposit(2000.00);
	account1.withdraw(1500.00);
	account1.setAccountType("current");
	cout<<"---------------"<<endl;
	cout<<"Upadated Account type to current"<<endl;
	account1.displayAccountDetails();
	BankAccount account2;
	return 0;
}

