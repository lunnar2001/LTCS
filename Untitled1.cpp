#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    //clrscr();
	int x,y,z;
	float p;
	cout<<"\nNhap vao x=";
	cin>>x;
	cout<<"\nNhap vao y=";
	cin>>y;
	cout<<"\nNhap vao z=";
	cin>>z;
	p=pow(pow(x,y),1.0/z)+log(2*pow(x,2)+5);
	cout<<"\np="<<p;
	//getch();
	return 0;
}
