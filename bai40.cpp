#include<iostream>
#include<math.h>
using namespace std;

int gt(int x)
{
	int g=1,i;
	if (x==0 || x==1)
	g=1;
	if (x!=0 || x!=0)
	g=g*i;
}
int main()
{
	int x, i;
	double s,eps;
	cout<<"nhap x: ";
	cin>>x;
	cout<<"nhap do chinh xac epsilon: ";
	cin>>eps;
	i=2;
	s=1-(x/gt(2));
	//gt=1;
	int dem=1;
	while(s<eps)
	{
		//gt=gt*(2*i-1);
		s=s+dem*(double)pow(x,(2*i))/gt(2*i);
		i=i+1;
		dem=-dem;
	}
	cout<<"Cos(x) = "<<s<<endl; //46 la bai nao
}

