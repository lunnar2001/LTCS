#include<iostream>

using namespace std;


int main()
{
	int y;
	cout<<"Nhap vao nam can tinh : ";
	cin>>y;
	if((y%400==0) || (y%4==0 && y%100!=0))
	{
		cout<<y<<" la nam nhuan";
	}
	else
	{
		cout<<y<<" khong phai la nam nhuan";
	}

}

