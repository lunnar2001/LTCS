#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f,D,Dx,Dy;
	float x,y;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Nhap c: ";
	cin>>c;
	cout<<"Nhap d: ";
	cin>>d;
	cout<<"Nhap e: ";
	cin>>e;
	cout<<"Nhap f: ";
	cin>>f;
	D=(a*c)-(b*d);
	Dx=(b*f)-(e*c);
	Dy=(c*d)-(a*f);
	if (D != 0)
	{
		x=(float)Dx/D;
		y=(float)Dy/D;
		cout<<x<<"	"<<y;
	}
	else
		if (D == 0)
		{
			if (Dx==0 && Dy==0)
			{
				cout<<"VSN";
			}
			else
				if (Dx != 0 || Dy != 0)
				{
					cout<<"VN";
				}
		}
}
