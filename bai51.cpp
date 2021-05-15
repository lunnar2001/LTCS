#include<iostream>
using namespace std;

int gt(int n)
{
    int g = 1;
    for (int i = 1; i <= n; i=i+1)
        g =g* i;
    return g;
}

int main()
{
	int n,k,C;
	cout<<"Nhap n: "; 
	cin>>n;
	cout<<"Nhap k: "; 
	cin>>k;
	if (k>n || k*n<0) 
		cout<<"Dieu kien: n > k & n, k > 0"<<endl;
	else
	{
		C=(gt(n)/(gt(k)*gt(n-k)));
		cout<<"C(k,n) = "<<C<<endl;	
	} 
	return 0;
}
