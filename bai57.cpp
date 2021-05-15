#include<iostream>
using namespace std;
int dn(int n)
{
	int i, s=0;
	do
	{
		i=n%10;
		s=s*10+i;
		n=n/10;
	}while(n>0);
	return s;
}
int main()
{
	int i,s,n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<dn(n);
}
