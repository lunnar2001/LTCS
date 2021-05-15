#include<iostream>
using namespace std;

int tong(int n)
{
	int s=0;
	for (int i=1;i<=n;i=i+2)
	{
		s=s+i;
	}
	return s;
}

int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong = "<<tong(n)<<endl;
}
