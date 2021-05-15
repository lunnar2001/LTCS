#include<iostream>

using namespace std;

bool NamNhuan(int y);

int main()
{
	int y;
	cout<<"Nhap vao nam can tinh : ";
	cin>>y;
	bool nam=NamNhuan(y);
	if(nam=false)
	{
		cout<<y<<" khong phai la nam nhuan";
	}
	else
	{
		cout<<y<<" la nam nhuan";
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
