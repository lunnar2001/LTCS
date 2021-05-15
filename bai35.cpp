#include<iostream>
using namespace std;

double tong(int n)
{
	double s=0;
	for (int i=1;i<=n;i=i+1)
	{
		s=s+(double)1/i;
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
