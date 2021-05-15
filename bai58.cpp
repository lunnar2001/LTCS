#include<iostream>
using namespace std;

bool doixung(int n)
{
	int i,s,asd=n;
	while (n>0)
	{
		i=n%10;
		s=s*10+i;
		n=n/10;	
	}
	if (asd==s) return true;
	else return false;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	if (doixung(n)==true)
	{
		cout<<"Doi xung";
	}
	else cout<<"Khong doi xung";
}
