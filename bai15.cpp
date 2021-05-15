#include <iostream>
#include <math.h>
 
 using namespace std;
 
 int main()
 {
 	int x,y,z;
 	double p;
 	cout<<"Nhap x : ";
 	cin>>x;
 	cout<<"Nhap y : ";
 	cin>>y;
 	cout<<"Nhap z : ";
 	cin>>z;
 	p=pow(pow((pow(x,3)+z),3),1.0/x)+pow(z+pow(y,3),x);
 	cout<<"p="<<p;
 }
