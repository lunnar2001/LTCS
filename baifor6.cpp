#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,s;
	cout<<"Nhap n: ";
	cin>>n;
	s=0;
	for (int i=1; i<=n;i=i+1)
	{
		s=s+pow(i,2);
		cout<<"\nTong = "<<s;
	}
}
