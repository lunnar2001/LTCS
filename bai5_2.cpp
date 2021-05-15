#include <math.h> 
#include <iostream>

using namespace std;
 
int main()

{
    int a,b;
    double duongcheo;
    
    do{
    cout << "\nNhap vao canh dai hinh chu nhat = " ;
	cin >> a;
	cout<<"\nNhap vao canh rong hinh chu nhat = ";
	cin>>b;
    if(a<=0 || b<=0){
    	cout<<"\nCanh dai va rong phai lon hon 0";
	}
    else
    {
    duongcheo=(a*a)+(b*b);
	cout << "\nDien tich hinh chu nhat la : " << a*b;
	cout << "\nChu vi hinh chu nhat la : " << (a+b)/2;
	cout<<"\nDo dai duong cheo hinh chu nhat la : "<<duongcheo;
    }
    }while(a<=0 || b<=0);
    return 0;
}
