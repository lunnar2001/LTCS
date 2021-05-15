#include<iostream>
#include<math.h>
using namespace std;
void tinh(int a,int b, char kitu)
{
	int tinh;
	if(kitu=='+')	cout<<a<<" + "<<b<<" = "<<a+b;
	if(kitu=='-')
		tinh=a-b;
	if(kitu=='*')
		tinh=a*b;
	if(kitu=='/')
		tinh=a/b;
	if(kitu=='^')
		tinh=pow(a,b);
}
int main()
{
	int a,b;
	char kitu;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	cout<<"Nhap ki tu: ";
	cin>>kitu;
	tinh(a,b,kitu);
}
