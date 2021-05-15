
#include<iostream>
#include<math.h>
//using namespace std;
struct dmhuy
{
	int x,y;
};
void nhapdmhuy(dmhuy &s)
{
	
		std::cout<<"Nhap tu: ";
		std::cin>>s.x;
		do{
			std::cout<<"Nhap mau: ";
			std::cin>>s.y;
		}while(s.y==0);
}
int UCLN(int a, int b)
{
	a=abs(a);
	a=abs(a);
	if (a*b != 0)
	{
		if(a>b)
			a%=b;
		else
			b%=a;
	}
	return a+b;
}

int main()
{
	struct dmhuy s,v;
	char n;
	nhapdmhuy(s);
	nhapdmhuy(v);
	std::cout<<"Nhap phep toan: ";
	std::cin>>n;
	//std::cout<<s.x<<"/"<<s.y;
}

/*#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
struct phansotype
{
	int tu,mau;
};
// ham nhap vao phan so
void nhapphanso(phansotype &n)
{
	cout<<"nhap tu= ";
	cin>>n.tu;
	do
	{
		cout<<"nhap mau khac 0: ";
		cin>>n.mau;
	}while(n.mau==0);
}
// ham xuat ra phan so
void xuatphanso(phansotype n)
{
	if(n.tu*n.mau<0)
		cout<<"-";
	cout<<abs(n.tu)<<"/"<<abs(n.mau);
}
// ham tim uoc chung lon nhat 
int UCLN(int a,int b)
{
	a=abs(a);
	b=abs(b);
	if(a==0) return b;
	if(b==0) return a;
	while(a!=b)
	{
		if(a>b)
		{ 
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}
// ham rut gon phan so
void rutgon(phansotype &n)
{
	int k=UCLN(n.tu,n.mau);
	n.tu=n.tu/k;
	n.mau=n.mau/k;
	xuatphanso(n);
}
// ham cong phan so
phansotype cong(phansotype n1,phansotype n2)
{
	phansotype n;
	n.tu=n1.tu*n2.mau+n1.mau*n2.tu;
	n.mau=n1.mau*n2.mau;
	rutgon(n);
	return n;
}
// ham tru phan so
phansotype tru(phansotype n1,phansotype n2)
{
	phansotype n;
	n.tu=n1.tu*n2.mau-n1.mau*n2.tu;
	n.mau=n1.mau*n2.mau;
	rutgon(n);
	return n;
}
// ham nhan phan so
phansotype nhan(phansotype n1, phansotype n2)
{
	phansotype n;
	n.tu=n1.tu*n2.tu;
	n.mau=n1.mau*n2.mau;
	rutgon(n);
	return n;
}
// ham chia phan so
phansotype chia(phansotype n1, phansotype n2)
{
	phansotype n;
	n.tu=n1.tu*n2.mau;
	n.mau=n1.mau*n2.tu;
	rutgon(n);
	return n;
}
int main()
{
	phansotype n3,n1,n2;
	char pheptoan;
	cout<<"nhap phan so thu nhat: ";
	nhapphanso(n1);
	cout<<"nhap phan so thu hai: ";
	nhapphanso(n2);

	cout<<"nhap cac phep toan: ";
	cin>>pheptoan;
	switch(pheptoan)
	{
		case'+': n3=cong(n1,n2);break;
		case'-': n3=tru(n1,n2);break;
		case'*': n3=nhan(n1,n2);break;
		case'/': n3=chia(n1,n2);break;
		default:cout<<"loi tinh toan";
	}
	xuatphanso(n1);
	cout<<pheptoan;
	xuatphanso(n2);
	cout<<"=";
	xuatphanso(n3);
}*/

