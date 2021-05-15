#include<iostream>
#include <math.h> 

using namespace std;

int main()
{
	int a,i;
	double duongcheo;
	
	do{
	
	cout<<"\nNhap canh hinh vuong : ";
	cin>>a;
	
	if (a <= 0) 
	{
		i++;
		cout<<"Gia tri khong hop le";
	}else
	{
		duongcheo = a*sqrt(2);
		cout<<"\nChu vi hinh vuong la: "<< a*4;
		cout<<"\nDien tich hinh vuong la: "<< a*a;
		cout<<"\nDuong cheo hinh vuong : "<< duongcheo;
	}
	}while(a <= 0 && i<5);
	return 0;
}
