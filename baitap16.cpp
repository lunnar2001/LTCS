#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a,b,x;
	float s;
	do{
		cout<<"\nNhap canh a : ";
		cin>>a;
		cout<<"Nhap canh b : ";
		cin>>b;
		cout<<"Nhap goc giua 2 canh a & b : ";
		cin>>x;
		if(0 >= x || x >=180)
	    {
		 cout<<"Goc giua 2 canh a & b khong the be hon 0 do va lon hon 180 do"<<endl;
        }else
        {
       	 s=(1/2)*a*b*sin(x);
       	 cout<<s;
	    }
	}while(0 >= x || x >=180);
}
