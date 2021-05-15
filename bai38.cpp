#include<iostream>
#include<math.h>
using namespace std;

int gt(int n)
{
    int g=1;
    for (int i=1;i<=n;i=i+1)
        g=g*i;
    return g;
}
double ex(int x, int n, double eps)
{
	double ex=1+x;
	int i=1;
	while(ex<eps && i<=n)
	{
		ex=ex+(double)pow(x,i)/gt(i);
		i=i+1;
	}
	return ex;
}
int main()
{
	int n,x;
	double eps;
	cout<<"Nhap vao x: ";
	cin>>x;
	cout<<"\nNhap vap n: ";
	cin>>n;
	cout<<"\nNhap vao do chinh xac epsilon = ";
	cin>>eps;
	cout<<"ex = "<<ex(x,n,eps)<<endl;
}
