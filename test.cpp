#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,x,i,gt,dau;
	float s;
	cout<<"\nNhap vao n: ";
	cin>>n;
	cout<<"\nNhap vao x: ";
	cin>>x;
	s=0;
	gt=1;
	dau=1;
	i=1;
	while (i<=n)
	{
		gt=gt*i;
		s=s+dau*(pow(x,i)/gt);
		cout<<"dau="<<dau<<endl;
		dau= -dau;
		cout<<"giai thua ="<<gt<<endl;
		cout<<"tong="<<s<<endl;
		i= i+1;
	}
}
