#include<iostream>
using namespace std;

bool snt(int x)
{
	if (x<=1) return false;
	for (int i=2;i<x;i++)
		if (x%i==0)	return false;
	return true;
}
int main()
{
	int n,x,p=0,dem=0, i=1;
	double tbc;
	cout<<"Nhap n: ";
	cin>>n;
	while(i<=n)
	{
		cout<<"So "<<i<<" : ";
		cin>>x;
		i++;
		if(snt(x)==true)	
		{
			p=p+x;
			dem+=1;
		}
	}
	tbc=(double)p/dem;
	cout<<"Trung binh cong cac so nguyen to la: "<<tbc;
}
