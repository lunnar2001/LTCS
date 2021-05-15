#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"Chuong trinh tinh tong hieu tich thuong\n";
    cout<<"Nhap a : ";
    cin>>a;
    cout<<"Nhap b : ";
    cin>>b;
    /*
	cout<<"sum is : ";
	cout<<tong;
	cout<<endl;
	*/
    cout<<"\nTong cua "<<a<<" + "<<b<<" la : "<<a+b;
    cout<<"\nHieu cua "<<a<<" - "<<b<<" la : "<<a-b;
    cout<<"\nTich cua "<<a<<" x "<<b<<" la : "<<a*b;
    if (b <= 0)
    {
    	cout<<"\nKhong chia duoc thuong";
	}else
	{6
		cout<<"\nThuong cua "<<a<<" / "<<b<<" la : "<<a/b;
	}
    return 0;
}
