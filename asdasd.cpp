#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x, n;
	double s;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n;
	s=0;
	int dem=-1;
	for (int i=1; i<=n; i=i+2)
	{
		s=s+(dem*pow(x,i))/i;
		dem=-dem;
		cout<<"Tong = "<<s<<endl;
	}
}
