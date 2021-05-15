#include<iostream>
using namespace std;

int main()
{
	int n,s;
	cout<<"Nhap n: ";
	cin>>n;
	s=0;
	for (int i=0; i<=n;i=i+2)
	{
		s=s+i;
		cout<<"\nTong = "<<s;
	}
}
