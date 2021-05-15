#include <iostream>
using namespace std;

int main()
{
	int h1,m1,s1,h2,m2,s2,h3,m3,s3,nho1,nho2;
	cout<<"Nhap moc thoi gian t1";
	cout<<"\nNhap gio: ";
	cin>>h1;
	cout<<"Nhap phut: ";
	cin>>m1;
	cout<<"Nhap giay: ";
	cin>>s1;
	cout<<"Nhap moc thoi gian t2";
	cout<<"\nNhap gio: ";
	cin>>h2;
	cout<<"Nhap phut: ";
	cin>>m2;
	cout<<"Nhap giay: ";
	cin>>s2;
	s3=(s1+s2)%60;
	nho1=(s1+s2)/60;
	m3=(m1+m2+nho1)%60;
	nho2=(m1+m2)/60;
	h3=(h1+h2+nho2)%24;
	cout<<"------------------------";
	cout<<"\nMoc t1:       "<<h1<<"h : "<<m1<<"m : "<<s1<<"s";
	cout<<"\nMoc t2:       "<<h2<<"h : "<<m2<<"m : "<<s2<<"s";
 	cout<<"\nKet qua:      "<<h3<<"h : "<<m3<<"m : "<<s3<<"s";	
}
