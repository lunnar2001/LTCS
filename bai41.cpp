#include<iostream>
#include<math.h>
using namespace std;

int gt(int n)
{
	int gt=1;
	if (n%2==0)
	{
		for (int i=2;i<=n;i=i+2)
		{
			gt=gt*i;
		}
	}
	if (n%2!=0)
	{
		for (int i=1;i<=n;i=i+2)
		{
			gt=gt*i;
		}
	}
	return gt;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Giai thua kep la: "<<gt(n);
}
