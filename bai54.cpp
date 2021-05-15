#include<iostream>
#include<math.h>
using namespace std;

bool nt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
	{
        if (n % i == 0)
            return false;
    }
	return true;
}

int main()
{
	int dem=0,i,n;
	cout<<"Nhap n: ";
	cin>>n;
	i=2;
	while (dem <= n) {
        if (nt(i)==true)
		{
            cout<<i<<"	";
            dem++;
        }
        i++;
    }
}
