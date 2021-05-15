#include<iostream>
using namespace std;

int dem(int n)
{
	int i,p;
	while(n>0)
	{
		i=n%10;
		n=n/10;
		p+=i;
	}
	return p;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<dem(n);
}
