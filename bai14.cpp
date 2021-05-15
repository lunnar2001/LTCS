#include <iostream>
#include <math.h>
 
 using namespace std;
 
 int main()
 {
 	int x,y,z;
 	float p;
 	cout<<"Nhap x : ";
 	cin>>x;
 	cout<<"Nhap y : ";
 	cin>>y;
 	cout<<"Nhap z : ";
 	cin>>z;
 	p=abs(pow(x,3)-y)+tan(pow(y,2)+2);
 	cout<<"p="<<p;
 }
