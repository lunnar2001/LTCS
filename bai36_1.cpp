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
	int dau=1;
	for(double i=1;i<=n;i=i+1)
	{
		s=s+dau*(double)1/pow(i,i);
		dau=-dau;
		cout<<"Tong = "<<s<<endl;
	}
}
