#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	int k=1;
	cin>>n;
	while(pow(2,k)<=n)
	{
		k=k+1;
	}
	cout<<k;
}
