#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	string items[3]={"Rice","Oil","Soap"};
	int price[3]={50,1435,100};
	int total=0;
	cout<<left<<"Items" <<'\t'<<right<<"Price"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<left<<items[i]<<'\t'<<right<<setw(4)<<setfill('#')<<price[i]<<endl;
		total+=price[i];
	}
	cout<<"____________\n";
	cout<<left<<"Total"<<'\t'<<right<<total<<endl;
	return 0;
}
