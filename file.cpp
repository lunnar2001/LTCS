#include<iostream>
using namespace std;
#include<fstream>
#include<math.h>
#include<string.h>

int isPrime(int n)
{
	if (n<=1) return false;
	for (int i=2;i<n;i++)
		if (n%i==0) return false;
	return true;
}

void inrasont(int a[100])
{
	int tong=0;
	for (int i=0;i<100;i++)
		if (isPrime(a[i])==true)
			tong+=a[i];
	ofstream dsa;
	dsa.open("C:\\Users\\MSI\\Desktop\\tong.TXT", ios::out);
	dsa << "Tong so nguyen to la: " << tong;
	cout<<"Ket qua da xuat ra file tong.txt";
	dsa.close();
}
int main()
{
	int prime[100];
	ifstream asd;
	asd.open("C:\\Users\\MSI\\Desktop\\sotunhieb.TXT", ios::in);
	if (asd.fail() == true)
	{
		cout << "\nFile cua ban khong ton tai";
		return 0; 
	}
	for (int i=0;i!='\n';i++)
		asd >> prime[i];
	inrasont(prime);
	asd.close();

}
