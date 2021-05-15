#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	int a,b,c,denta,denta1;
	float x,y,x1,x2,y1,y2,x3,x4;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	denta=(b*b)-(4*a*c);
	if (a!=0)
	{
	 if (denta>0)
	 {
		y1=(float)((-b)+sqrt(denta))/(2*a);
		y2=(float)((-b)-sqrt(denta))/(2*a);
		if(y1>=0&&y2>=0)
		{
			x1=sqrt(y1);
			x2=sqrt(y2);
			x3=-sqrt(y1);
			x4=-sqrt(y2);
			cout<<"\nPhuong trinh co 4 nghiem phan biet : "<<endl;
			cout<<"\nX1="<<x1;
			cout<<"\nX2="<<x2;
			cout<<"\nX3="<<x3;
			cout<<"\nX4="<<x4;
		}
		else if(y1>=0 && y2<0)
		{
			x1=sqrt(y1);
			x3=-sqrt(y1);
			cout<<"\nPhuong trinh co 2 nghiem phan biet : "<<endl;
			cout<<"\nX1="<<x1;
			cout<<"\nX2="<<x3;
		}		
		else if(y1<0 && y2>=0)
		{
			x2=sqrt(y2);
			x4=-sqrt(y2);
			cout<<"\nPhuong trinh co 2 nghiem phan biet : "<<endl;
			cout<<"\nX1="<<x2;
			cout<<"\nX2="<<x4;
		}
		else if(y1<0 && y2<0)
		{
			cout<<"\nPhuong trinh vo nghiem";
		}
     }
     if (denta == 0)
     {
     	y=(float)(-b)/(2*a);
     	if (y>=0)
     	{
     		x1=sqrt(y);
     		x2=-sqrt(y);
     		cout<<"\nPhuong trinh co 2 nghiem kep : "<<endl;
     		cout<<"\nX1=X3="<<x1;
     		cout<<"\nX2=X4="<<x2;
		}
		else if (y<0)
		{
			cout<<"\nPhuong trinh vo nghiem";
		}
	 }
	 if (denta <0)
	 {
	 	cout<<"\nPhuong trinh vo nghiem";
	 }
   }
   else if (a==0)
   {
   		if(b==0)
   		{
   			if(c==0)
   			{
   				cout<<"\nPhuong trinh co vo so nghiem";
			}
			else if (c != 0)
			{
				cout<<"\nPhuong trinh vo nghiem";
			}
		}
		else if (b != 0)
		{
				y=(float)((-c)/b);
				if (y>=0)
				{
					x1=sqrt(y);
					x2=-sqrt(y);
					cout<<"\nPhuong trinh co 2 nghiem phan biet : "<<endl;
     		        cout<<"\nX1="<<x1;
     		        cout<<"\nX2="<<x2;
				}
				else if(y<0)
				{
					cout<<"\nPhuong trinh khong co nghiem";
				}
		}
   }
}
