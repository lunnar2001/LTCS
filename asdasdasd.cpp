#include<iostream>
#include<math.h>
using namespace std;
void gpt(double a,double b,double c)
{
	double delta;
	float x1,x2;
	if(a==0)
	{
	cout<<"\nKhong phai phuong trinh bac hai";
	}
	else
	{
		delta=b*b-4*a*c;
		if(delta<0)
		{
			cout<<"\nPhuong Trinh Vo Nghiem";
		}
		else 
		if(delta==0)
		{
	 		cout<<"\nPhuong trinh co nghiem kep x1=x2="<<-b/a;
		}
		else 
		if(delta>0)
		{   
	    		x1=(-b+sqrt(delta)/2*a);
        		x2=(-b-sqrt(delta)/2*a);	
			cout<<"\nPhuong trinh co hai nghiem phan biet";
			cout<<"\nx1 ="<<x1;
			cout<<"\nx2 ="<<x2;
		}
	}	
}
int main()
{
	int a,b,c;
	cout<<"\nhap vao a: ";
	cin>>a;
	cout<<"\nnhap vao b: ";
	cin>>b;
	cout<<"\nnhap vao c: ";
	cin>>c;
	gpt(a,b,c);
}
