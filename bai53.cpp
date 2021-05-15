#include<iostream>
using namespace std;

int nguyen(int i, int a, int b)
{
	if (i>a && i<b)
	{
		return i;
	}
	else
	{
		return 0;	
	}
}
int main()
{
	int n,a,b;
	cout<<"Nhap so nguyen n: ";
	cin>>n;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	if (nguyen(n,a,b)) cout<<nguyen(n,a,b);
}
