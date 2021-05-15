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
int main()
{
	int n,dau;
	double x,sinx,eps;
	cout<<"Nhap vao x:";
	cin>>x;
	cout<<"\nNhap vap n:";
	cin>>n;
	cout<<"\nNhap vao do chinh xac epsilon =";
	cin>>eps;
	sinx=0;
	x=x*3.14/180;
	dau=1;
	if(sinx<eps)
	{
		for(double i=1;i<=n;i=i+2)
		{
			sinx=sinx+dau*pow(x,i)/gt(i); 
			dau=-dau;
			
		}
		cout<<"Sin("<<x<<") ="<<sinx<<endl;
	}
}
