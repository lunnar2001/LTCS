#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int gt=1;
	if (n%2==0)
	{
		for (int i=2;i<=n;i=i+2)
		{
			gt=gt*i;
		}
		cout<<"Giai thua kep chan la: "<<gt;
	}
	if (n%2!=0)
	{
		for (int i=1;i<=n;i=i+2)
		{
			gt=gt*i;
		}
		cout<<"Giai thua kep le la: "<<gt;
	}
}
