#include<iostream>
using namespace std;

int tong(int n)
{
	int f3,f1=1,f2=1;
	for(int i=3;i<=n;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	return f3;
}

int main()
{
	int f1,f2,n;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"f3 = "<<tong(n)<<endl;
}

