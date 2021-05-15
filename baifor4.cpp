#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	double s;
	cout<<"Nhap n: ";
	cin>>n;
	s=0;
	for (double i=1; i<=n;i=i+1)
	{
		s=s+(double)1/pow(i,2);
		cout<<"\nTong = "<<s;
	}
}
