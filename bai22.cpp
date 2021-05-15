#include<iostream>
using namespace std;

bool NamNhuan(int y);
int main()
{
	int d,m,y;
	bool NamNhuan(y);

	cout<<"Nhap nam : ";
	cin>>y;
	if (y<2000)
	{
		cout<<"Sai gia tri nam";
		return 0;
	}
	cout<<"Nhap thang trong nam "<<y<<" : ";
	cin>>m;
	if (m==0 || m>12)
	{					
		cout<<"Sai gia tri thang";
		return 0;
	}
	cout<<"Nhap ngay trong nam "<<y<<" : ";
	cin>>d;
	if ((m==4 || m==6 || m==9 || m==11)&&d>30 || (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)&&d>31 || (NamNhuan=true)&&d>29 || (NamNhuan=false)&&d>28)
		{
			cout<<"\nSai gia tri ngay...";
			return 0;
		}
	if (m==2)
	{
		if(NamNhuan=true)
		{
			if (d==29)
			{
				d=1;
				m=++m;
				cout<<d<<"/"<<m<<"/"<<y;
				return 0;
			}
			else
				if (d<29 && d!=0)
				{
					d=++d;
					cout<<d<<"/"<<m<<"/"<<y;
				}
			else
				if (d<=0 || d>29)
				{	
					cout<<"Sai gia tri ngay";
			    }
		}
		else
		{
			if (d==28)
			{
				d=1;
				m=++m;
				cout<<d<<"/"<<m<<"/"<<y;
			}
			else
				if (d<28 && d != 0)
				{
					d=++d;
					cout<<d<<"/"<<m<<"/"<<y;
				}
			else
				if (d<=0 || d>28)
					cout<<"Sai gia tri ngay";
		}
	}
	if (m==4 || m==6 || m==9 || m==11)
	{
		if (d==30)
		{
			d=1;
			m=++m;
			cout<<d<<"/"<<m<<"/"<<y;
		}
		else
			if (d<30 && d!=0)
			{
				d=++d;
				cout<<d<<"/"<<m<<"/"<<y;
			}
		else
			if (d<=0 || d>30)
				cout<<"Sai gia tri ngay";
	}
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		if (d==31 && m==12)
		{
			d=1;
			m=1;
			y=++y;
			cout<<d<<"/"<<m<<"/"<<y;
		}
		else	
			if (d==31 && m<12)
			{
				d=1;
				m=++m;
				cout<<d<<"/"<<m<<"/"<<y;
			}
		else if (d<31 && d!=0)
		{
			d=++d;
			cout<<d<<"/"<<m<<"/"<<y;
		}
		else 
			if (d<=0 || d>31)
				cout<<"Sai gia tri ngay";
	}
}
bool NamNhuan(int y)
{
	if((y%4==0)||(y%400==0))
	{
		if(y%100!=0)
		{
			return true;
		}
	}
	return false;
}
