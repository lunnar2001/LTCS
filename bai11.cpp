#include <iostream>
using namespace std;

int main()
{
	int n,du,gio,phut,giay;
	cout<<"Nhap so n (Nguyen Duong) : ";
	cin>>n;
	if (n <= 0)
	{
		cout<<"n phai la so nguyen duong";
		
	}else
	{
		gio=n/3600;
		du=n%3600;
		phut=du/60;
		giay=du%60;
		cout<<"\nGio:Phut:Giay la : "<<gio<<"h : "<<phut<<"m : "<<giay<<"s";
	}
}
