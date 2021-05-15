#include<iostream>
using namespace std;

int main()
{
	char n;
	cout<<"Nhap n: ";
	cin>>n;
	while(n==1 || n%2!=0)
	{
		cout<<"\nNhap n: ";
		cin>>n;
	}
	cout<<n;
}
