#include<iostream>
#include<math.h>
using namespace std;

void pt1(double b, double c)
{
	if (b == 0) 
	{
		if (c == 0) cout<<"VSN"<<endl;
		else cout<<"VN"<<endl;
	}
	else cout<<"X="<<(float)(-c)/b;
}

void pt2(double a, double b, double c)
{
	if (a==0) pt1(b,c);
	else
	{
		double delta=pow(b,2)-4*a*c;
		if (delta<0)
		{
	 		cout<<"Phuong trinh vo nghiem";
		}
		else if (delta==0)
		{
	 		double x=(float)(-b)/(2*a);
	 		cout<<"Phuong trinh co nghiem kep : X1=X2="<<x;
		}
		else if (delta > 0)
		{
	 		double x1=(float)((-b)+sqrt(delta))/(2*a);
	 		double x2=(float)((-b)-sqrt(delta))/(2*a);
	 		cout<<"Phuong trinh co 2 nghiem phan biet : "<<"X1="<<x1<<"	X2="<<x2;
		}
	}
}

int main()
{
	int a,b,c;
	float x;
	cout<<"Nhap a : ";
	cin>>a;
	cout<<"Nhap b : ";
	cin>>b;
	cout<<"Nhap c : ";
	cin>>c;
	
	//pt1(b,c);
	pt2(a,b,c);
	
//	x=(float)(-c)/b;
//	cout<<"x="<<x;
	
}
