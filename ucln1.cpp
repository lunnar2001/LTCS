#include<iostream>
using namespace std;

int ucln(int a, int b)
{
	if (a==0) return b;
	if (b==0) return a;
	while(a!=b)
	{
		if(a>b)	a=a-b;
		if(b>a) b=b-a;
	}
	int asd=b=a;
	return asd;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"UCLN la: "<<ucln(a,b);
}
