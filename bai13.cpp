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
 	p=pow(pow(x,y),1.0/z)+log(2*pow(x,2)+2);
 	cout<<"p="<<p;
 	return 0;
 }
