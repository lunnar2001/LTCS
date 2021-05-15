#include<iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    float p,s;
    cout<<"Nhap vao canh a: "; 
    cin>>a;
    cout<<"Nhap vao canh b: ";
    cin>>b;
    cout<<"Nhap vao canh c: ";
    cin>>c;
    if( a<b+c && b<a+c && c<a+b )
	{
    	p=(float)(a+b+c)/2;
    	s=sqrt(p*(p-a)*(p-b)*(p-c));
    	cout<<"Chu vi tam giac la : " <<a+b+c;
    	cout<<"\nDien tich cua tam giac la : "<<s;
        if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
            cout<<"\nDay la tam giac vuong";
        else 
		    if(a==b && b==c)
            	cout<<"\nDay la tam giac deu";
        else 
			if(a==b || a==c || b==c)
            	cout<<"\nDay la tam giac can";
        else 
			if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
            	cout<<"\nDay la tam giac tu";
        else 
            cout<<"\nDay la tam giac nhon"; 
    }
    else
        cout<<"Ba canh a, b, c khong phai la ba canh cua mot tam giac";
    return 0;
}
