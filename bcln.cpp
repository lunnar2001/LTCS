#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int a, b, max, bcnn;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
   
	if(a > b)
    	max = a;
	else
    	max = b;
    if (max%a!=0)
    	max=a*b;
    if (max%b!=0)
    	max=a*b;
    
	/*int i=max;
	
	while(i>max)	
	{
		if(i%a == 0 && i%b == 0) 
		{
			bcnn=i;
		}
		i=i-1;
	}*/
	for (int i=1;i<=max;i=i+1)
	{
		if(i%a == 0 && i%b == 0) 
		{
			bcnn=i;
		}
	}
	
	cout<<bcnn;;
	return 0;
}
