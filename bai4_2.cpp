#include <iostream>
	
using namespace std;
	 
int main()
	
{
    int a,i;                             	
    cout << "Tinh chu vinh va dien tich hinh tron"<<endl;
    do{
    cout << "\nNhap vao banh kinh hinh tron = " ;
	cin >> a;
    if(a<=0)
	{
    	cout<<"\nKhong co hinh tron nao co r be hon hoac bang 0 ca";
	}
	else
    {
    i++;
	cout << "\nDien tich hinh tron la : " << a*a*3.14;
	cout << "\n\nChu vi hinh tron la : " << 2*a*3.14;
    }
    }while(a<=0 && i<5);
    return 0;
}
