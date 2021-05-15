#include<iostream>

using namespace std;

int main()
{
	int max,a,b,c;
	cout<<"Nhap a : ";
	cin>>a;
	cout<<"Nhap b : ";
	cin>>b;
	cout<<"Nhap c : ";
	cin>>c;
	max=a;
	if (max<b)
	 {
	 	max=b;
	 }
	if (max<c)
	 {
	 	max=c;
	 }
	cout<<"So lon nhat la : "<<max;
}	
