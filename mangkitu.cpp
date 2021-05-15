#include<iostream>
#include<string.h>
using namespace std;

void Nhapkitu(char n[50])
{
	cout<<"Nhap ki tu: ";
	gets(n);
}

void print(char n[50])
{
	cout<<n;
}
int length(char n[50])
{
	int dem=0;
	for(int i=0; n[i]!='\0';i++)
		dem++;
	return dem;
}
void tim(char n[50])
{
	char a[10]="asd";
	int dem=0;
	if (strstr(n,a) != NULL)
		cout<<"?";
}
void copy(char n[])
{
	char a[100];
	strcpy(a,n);
	cout<<a;
}
void xoakitu(char n[])
{
	for (int i=0; i<length(n);i++)
	{
		if (n[i]=='a')
			//n[i]=n[i+1];
			for (int j=i; j<length(n); j++)
			{
				n[j]=n[j+1];
				n[length(n)]='\0';
			}
	}
	print(n);
}
int main()
{
	char n[50];
	Nhapkitu(n);
	//print(n);
	//demkitu(n);
	xoakitu(n);
	//cout<<length(n);
}
