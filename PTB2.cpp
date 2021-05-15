#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c,denta;
	float x1,x2,x;
	cout<<"Nhap a : ";
	cin>>a;
	cout<<"Nhap b : ";
	cin>>b;
	cout<<"Nhap c : ";
	cin>>c;
	denta=pow(b,2)-4*a*c;
	if (denta<0)
	 {
	 	cout<<"Phuong trinh vo nghiem";
	 }
	else if (denta==0)
	 {
	 	x=(float)(-b)/(2*a);
	 	cout<<"Phuong trinh co nghiem kep : X1=X2="<<x;
	 }
	else if (denta > 0)
	 {
	 	x1=(float)((-b)+sqrt(denta))/(2*a);
	 	x2=(float)((-b)-sqrt(denta))/(2*a);
	 	cout<<"Phuong trinh co 2 nghiem phan biet : "<<"X1="<<x1<<"	X2="<<x2;
	 }
}
