#include<iostream>
#include<math.h>
using namespace std;

double tong(int n)
{
	double s=0;
	int dau=1;
	for(double i=1;i<=n;i=i+1)
	{
		s=s+dau*(double)1/pow(i,i);
		dau=-dau;	
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
