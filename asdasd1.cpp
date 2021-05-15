#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int s=1;
	for (int i=1; i<=n; i=i+1)
	{
		s=s*i;
	}
	cout<<"Giai thua = "<<s<<endl;
}
