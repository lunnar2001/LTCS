#include<iostream>
#include<math.h>
using namespace std;

int gt(int n)
{
    int g = 1;
    for (int i = 1; i <= n; i=i+1)
        g =g* i;
    return g;
}

double tong(int n)
{
	double s=0;
	int dau=1;
	for(double i = 1;i <= n; i=i+1)
	{
		s=s+dau*(double)1/gt(i);
		dau=-dau;
	}
	return s;
}

int main()
{
	int n,gt;
	double s;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Tong = "<<tong(n)<<endl;
}	
