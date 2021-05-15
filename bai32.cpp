#include<iostream>
using namespace std;

int main()
{
	int m1,m2,m3,so,vnd,k1,k2;
	cout<<"\nNhap don gia m1: ";
	cin>>m1;
	cout<<"\nNhap don gia m2: ";
	cin>>m2;
	cout<<"\nNhap don gia m3: ";
	cin>>m3;
	do
	{	
		cout<<"\nNhap so dau ky: ";
		cin>>k1;
		cout<<"\nNhap so cuoi ky: ";
		cin>>k2;
		if (k2 < k1)
			cout<<"\nSo cuoi ky khong the be hon so dau ky";
	}while(k2<k1);
	so=k2-k1;
	if (so <=100)
	{
		vnd=so*m1;
		cout<<"Tien dien la: "<<vnd;
	}
	else 
		if (so > 100 && so <=200)
		{
			vnd=so*m2;
			cout<<"Tien dien la: "<<vnd;
		}
	else
		{
			vnd=so*m3;
			cout<<"Tien dien la: "<<vnd;
		}
}
