#include<iostream>
using namespace std;
int main()
{
	int t1,t2,t3,phut;
	float cuoc;
	cout<<"Chuong trinh trinh cuoc su dung internet";
	cout<<"\nNhap thoi gian bat dau:";
	cin>>t1;
	cout<<"\nNhap thoi gian ket thuc:";
	cin>>t2;
	t3=t2-t1;
	phut=t3*60;
	if(t1>=0 && t1<7)
	{
		if(t3<=7)
		{
			cuoc=t3*60*300;
			cout<<"\nThoi gian su dung internet la:"<<phut;
			cout<<"\nCuoc su dung internet la:"<<cuoc;
		}
		else
		{
			if(t3>7)
			{
				cuoc=(t3*60*300)-((t3*60*300)*(float)15/100);
				cout<<"\nThoi gian su dung internet la:"<<phut;
				cout<<"\nCuoc su dung internet la:"<<cuoc;
			}
		}
	}
	if(t1>=7 && t1<17)
	{
		if(t3>6)
		{
			cuoc=(t3*60*300)-((t3*60*300)*(float)10/100);
			cout<<"\nThoi gian su dung internet la:"<<phut;
			cout<<"\nCuoc su dung internet la:"<<cuoc;
		}
		else
		{ 
			if(t3<=6)
			{
				cuoc=t3*60*400;
				cout<<"\nThoi gian su dung internet la:"<<phut;
				cout<<"\nCuoc su dung internet la:"<<cuoc;
			}
		}
	}
	if(t1>=17 && t1<24)
	{
		if(t3<=4)
		{
			cuoc=t3*60*350;
			cout<<"\nThoi gian su dung internet la:"<<phut;
			cout<<"\nCuoc su dung internet la:"<<cuoc;

		}
		else
		{ 
			if(t3>4)
			{
				cuoc=(t3*60*300)-((t3*60*300)*(float)10/100);
				cout<<"\nThoi gian su dung internet la:"<<phut;
				cout<<"\nCuoc su dung internet la:"<<cuoc;
			}
		}
	}
}
