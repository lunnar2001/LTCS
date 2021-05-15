#include<iostream>
#include<math.h>
using namespace std;

int nt(int n)
{
    if (n < 2) return 0;	
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) return 0;
    }
	return 1;
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	if (nt(n)==1) cout<<n<<" la so nguyen to";
	else cout<<n<<" khong phai la so nguyen to";
}
