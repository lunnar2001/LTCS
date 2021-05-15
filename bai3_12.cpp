#include<iostream>
using namespace std;

int main()
{
	int ngay;
	float vnd;
	char n;
	cout<<"Nhap so ngay thue: ";
	cin>>ngay;
	cout<<"Nhap loai phong thue: ";
	cin>>n;
	switch(n)
	{
		case 'A': if (ngay <= 12) 
				  {
						vnd=ngay*250000;
						cout<<"Gia tien: "<<vnd;	
			      }
			      else 
			      	if (ngay >12)
			      	{
			      		vnd=(ngay*250000)-((ngay*250000)*(float)(10/100));
					};break;
		case 'B': if (ngay <= 12) 
				  {
						vnd=ngay*200000;
						cout<<"Gia tien: "<<vnd;	
			      }
			      else 
			      	if (ngay >12)
			      	{
			      		vnd=(ngay*200000)-((ngay*200000)*(float)(8/100));
					};break;
		case 'C': if (ngay <= 12) 
				  {
						vnd=ngay*150000;
						cout<<"Gia tien: "<<vnd;	
			      }
			      else 
			      	if (ngay >12)
			      	{
			      		vnd=(ngay*150000)-((ngay*150000)*(float)(8/100));
					};break;
		default: cout<<"vui long nhap dung loai phong";
	}
}
