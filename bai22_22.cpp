#include <iostream>
using namespace std;

bool NamNhuan(int nam);

int main() {
	cout<<"chuong trinh ngay thang nam\n";
	int ngay,thang,nam;
	cout<<"nhap vao ngay: ";
	cin>>ngay;
	cout<<"nhap vao thang: ";
	cin>>thang;
	cout<<"nhap vao nam: ";
	cin>>nam;
	bool NamNhuan(nam);
	if(ngay>31||ngay<0||thang>12||thang<0||nam<2000||(ngay>28&&thang==2&&(NamNhuan=false)))
	{
		cout<<"\nSai gia tri";
	}
	else 
	{
		
		int ngaykt;
		if((thang==2 && ngay==29)|| ((NamNhuan=false) && thang==2 && ngay==28)|| ((ngay==31) &&(thang==1 ||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12))||((ngay==30) &&(thang==4 ||thang==6||thang==9||thang==11)))
		{
			ngaykt=1;
		}
		else
		{	
			ngaykt=ngay+1;	
		}
		int thangkt;
		if((thang==2 && ngay==29) ||((nam%4!=0) &&thang==2 && ngay==28) || ((ngay==31) &&(thang==1 ||thang==3||thang==5||thang==7||thang==8||thang==10))||((ngay==30) &&(thang==4 ||thang==6||thang==9||thang==11)))
		{
			thangkt=thang+1;
		}
		else
		{
			if(thang==12 &&ngay==31)
			{
				thangkt=1;
			}
			else
			{
				thangkt=thang;
			}
		}
		int namkt;
		if(ngay==31 && thang==12)
		{
			namkt=nam+1;
		}
		else
		{
			namkt=nam;
		}
		cout<<"ngay  thang nam ke tiep :"<<ngaykt<<"/"<<thangkt<<"/"<<namkt;
		
			
	}
}
bool NamNhuan(int nam)
{
	if((nam%4==0)||(nam%400==0))
	{
		if(nam%100!=0)
		{
			return true;
		}
	}
	return false;
}
