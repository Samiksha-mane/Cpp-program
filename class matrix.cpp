#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Matrix
{
	int x[3][3];
	public:
		void init();
		void setData();
		void display();
		void trandpose();
		void add(Matrix&,Matrix&);
		void sub(Matrix&,Matrix&);
		void mul(Matrix&,Matrix&);
};
void Matrix::init()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		x[i][j]=0;
	}
}
void Matrix::setData()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\n x["<<i<<"]["<<j<<"]";
			cin>>x[i][j];
		}
	}
}
void Matrix::display()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		cout<<" "<<x[i][j];
		cout<<"\n";
		
	}
}
void Matrix::trandpose()
{
	int i,j,tmp;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmp=x[i][j];
			x[i][j]=x[j][i];
			x[j][i]=tmp;
		}
	}
}
void Matrix::add(Matrix&p,Matrix&q)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		x[i][j]=p.x[i][j]+q.x[i][j];
	}
}
void Matrix::sub(Matrix&p,Matrix&q)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		x[i][j]=p.x[i][j]-q.x[i][j];
	}
}
void Matrix::mul(Matrix&p,Matrix&q)
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			x[i][j]=0;
			for(k=0;k<3;k++)
			x[i][j]+=(p.x[i][j]*q.x[k][j]);
		}
	}
}
int main()
{
	Matrix a,b,c;
	cout<<"\n Data for Matrix a:\n";
	a.setData();
	cout<<"\n Data for Matrix b :\n";
	b.setData();
	c.add(a,b);
	a.display();
	b.display();
	c.display();
	return 0;
}

