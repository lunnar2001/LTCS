
#include<iostream>
#include<fstream>
using namespace std;
typedef struct PhanSo
{
	int tu;
	int mau;
}PS;
void InPhanSo(PS a)
{
	cout<<"\n"<<a.tu<<"/"<<a.mau;
}
void DocFileVaoMang(PS a[100],int &n)
{
	fstream FileIn;
	FileIn.open("C:\\Users\\MSI\\Desktop\\ps.txt",ios_base::in);
	if(FileIn.fail()) cout<<"File nay khong ton tai";
	//int i=0;
	n=-1;
	while (!FileIn.eof())
	{
		FileIn>>a[++n].tu;
		FileIn>>a[n].mau;
		cout<<n;
	}
	//cout<<i<<"\t"<<n;
	//cout<<a[3].tu<<"\t"<<a[3].mau;
	FileIn.close();
}
XuatMangPhanSo(PS a[100],int n)
{
	for(int i=0;i<n;i++)
	{
		InPhanSo(a[i]);	
	}
}
int UCLN(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}
double Divide(PS a)
{
	double c;
	c=(float)a.tu/a.mau;
	return c;		
}
PS rutGon(PS a) // can tra ve phan so nen ta dung ham ham kieu struct tu dinh nghia
{
    PS c;
    c.tu = a.tu / UCLN(a.tu, a.mau);
    c.mau = a.mau / UCLN(a.tu, a.mau);
    return c;
}
void TimMax(PS a[100],int &n)
{
	int vt;
	PS Max=a[0];
	for(int i=0;i<n;i++)
	{
		if(Divide(a[i])>Divide(Max))
		{
			Max=a[i];
			vt=i;
		}
	}
	cout<<"\nPhan so Max:";
	InPhanSo(Max);
	//cout<<"\nMax la:"<<Max;
	//cout<<"\nVi tri:"<<vt;
}
void TimMin(PS a[100],int &n)
{
	int vt;
	double Min=(float)a[0].tu/a[0].mau;
	for(int i=0;i<n;i++)
	{
		if((float)a[i].tu/a[i].mau<Min)
		{
			Min=(float)a[i].tu/a[i].mau;
			vt=i;
		}
	}
	cout<<"\nMin la:"<<Min;
	cout<<"\nVi tri:"<<vt;
}
PS cong(PS a, PS b)
{
    PS c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    return c;
}
void TinhTong(PS a[100],int &n)
{
	PS tong=a[0];
	PS b;//bien nay de gan gia tri rut gon
	for(int i=1;i<n;i++)
	{
       //tong.tu+=tong.tu*a[i].mau+tong.mau*a[i].tu;
       //tong.mau+=tong.mau*a[i].mau;
       tong=cong(tong,a[i]);
    }
    cout<<"\nTong phan so:";
    b=rutGon(tong);
    InPhanSo(b);
}
void TimTongMax(PS a[100],int &n)
{
	int vt1,vt2;
	PS Max=a[0];
	PS s;
	for(int i=0;i<n-1;i++)
	{
		//s=(float)a[i].tu/a[i].mau + (float)a[i+1].tu/a[i+1].mau;
		s=cong(a[i],a[i+1]);
		if(Divide(s)>Divide(Max))
		{
			Max=s;
			vt1=i;
			vt2=i+1;	
		}
	}
	//cong(a[vt1],a[vt2]);
	cout<<"\nTong lon nhat cua 2 phan so la:";
	InPhanSo(Max);
	cout<<"\nPhan so o vi tri:"<<vt1;
	cout<<"\nPhan so o vi tri:"<<vt2;

}
void sapXepTangDan(PS a[100],int n)
{
	int i,j;
	PS temp;
	for(i=0;i<n;i++) // Bubble sort
	{
		for(j=n-1;j>i;j--)
		{
			if(Divide(a[j])<Divide(a[j-1]))
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	XuatMangPhanSo(a,n);
}
void Tong2Max(PS a[100], int &n)
{
	PS b;
	PS max, max2;
    if (Divide(a[0]) > Divide(a[1]))
	{
        max = a[0];
        max2 = a[1];
    }
	else
	{
        max = a[1];
        max2 = a[0];
    }
    for(int i = 2; i < n; i++)
	{
        if(Divide(max)<Divide(a[i]))
		{
            max2 = max;
            max = a[i];
        } else 
			if (Divide(max2)<Divide(a[i]))
        		max2=a[i];
    }
	//InPhanSo(max);
	//InPhanSo(max2);
	b=cong(max,max2);
	cout<<"Tong cua 2 max la:";
	rutGon(b);
	InPhanSo(b);
}
void XoaMang(PS a[100],int &n,int k)
{
	for(int i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
void XoaMangMauChan(PS a[100],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].mau%2==0)
		{
			XoaMang(a,n,i);
			i--;
		}
	}
	XuatMangPhanSo(a,n);
}
void XuatFile(PS a[100], int n)
{
	ofstream asd;
	asd.open("C:\\Users\\MSI\\Desktop\\xuat.txt",ios_base::in);
	asd<<"In ra phan so: "<<endl;
	for (int i=0;i<n;i++)
	{
		asd<<a[i].tu<<"/";
		asd<<a[i].mau<<endl;	
	}
}
int main()
{
	PS a[100];
	int n;
//	NhapMangPhanSo(a,n);
	DocFileVaoMang(a,n);
	XuatMangPhanSo(a,n);
	XuatFile(a,n);
}
//Xoa cac phan so co mau la chan (2 ham)
//Sap xep mang phan so tang dan ( ham divide )
//Tinh tong cua hai phan so lon nhat

