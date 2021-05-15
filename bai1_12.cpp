#include<iostream>
using namespace std;

int main()
{
	int km,vnd;
	do
	{
	cout<<"Nhap so km: ";
	cin>>km;
	if (km<0)
		cout<<"Km khong the < 0";
	}while(km<0);
	if (km==1)
		cout<<"Gia tien: 5000vnd";
	else 
		if (km >= 2 && km <=5)
		{
			vnd=km*4500;
			cout<<"Gia tien: "<<vnd<<"vnd";
		}
	else
		if (km > 6)
		{
			vnd=km*3500;
			if (km<120)
			{
				vnd=(km*3500)-((km*3500)*(10/100));
				cout<<"Gia tien: "<<vnd<<"vnd";
			}
			cout<<"Gia tien: "<<vnd<<"vnd";
		}
}
