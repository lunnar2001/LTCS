#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b;
	float kq;
	char n;
	cout<<"Chuong trinh may tinh dien tu";
	cout<<"\nNhap vao a: ";
	cin>>a;
	cout<<"\nNhap vao b: ";
	cin>>b;
	cout<<"\nNhap vao phep toan (+,-,*,/,^): ";
	cin>>n;
	switch(n)
	{
		case '+': cout<<a<<" + "<<b<<" = "<<a+b;break;
		case '-': cout<<a<<" - "<<b<<" = "<<a-b;break;
		case '*': cout<<a<<" * "<<b<<" = "<<a*b;break;
		case '/': if (b>0)
				  {
						cout<<a<<" / "<<b<<" = "<<a/b;
				  }
				  else 
				  {
				  	cout<<"ERROR";
				  };break;
		case '^': cout<<a<<" ^ "<<b<<" = "<<pow(a,b);break;
		default: cout<<"ERROR";
	}
}
