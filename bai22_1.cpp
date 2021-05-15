#include<iostream>
using namespace std;

bool NamNhuan(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))	return true;
	else return false;
}
int maxDay(int m, int y)
{
	if (m==4 || m==6 || m==9 || m==11) 
		return 30;
	else
		if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
			return 31;
	else
		if (m==2 && NamNhuan(y)==true)
			return 29;
	else
		return 28;
}
void nhap(int &x, string s,int min, int max)
{
	do
	{
		cout<<"\nNhap "<<s<<": ";
		cin>>x;
	}while(x<min || x>max);
}
void check(int &d, int &m, int &y)
{
	nhap(y,"nam", 1900, 5000);
	nhap(m, "thang", 1, 12);
	//nhap(d, "ngay", 1, maxDay(m,y));
}
//void nextDay(int d, int m, int y)
//{
//	if(d==maxDay(m, y) && m<12)
//		cout<<"\nNgay tiep theo la: "<<"1"<<"/"<<++m<<"/"<<y;
//	else 
//		if(d<maxDay(m,y))
//			cout<<"\nNgay tiep theo la: "<<++d<<"/"<<m<<"/"<<y;
//	else
//		if(d==maxDay(m,y) && m==12)
//			cout<<"\nNgay tiep theo la: "<<"1"<<"/"<<"1"<<"/"<<++y;
//}
int main()
{
	int d,m,y;
	cout<<"Chuong trinh hien thi ngay tiep theo"<<endl;
	check(d,m,y);
//	nextDay(d,m,y);
	cout<<maxDay(m,y);
}
