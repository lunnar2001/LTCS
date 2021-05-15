#include<iostream>
using namespace std;
struct phanso{
	int tuso;
	int mauso;
};
void nhap(phanso &n)
{
	cout<<"Nhap tu so: ";
	cin>>n.tuso;
	do{
		cout<<"Nhap mau so: ";
		cin>>n.mauso;
	}while(n.mauso==0);
}
void mangps(phanso a[], int &n)
{
	cout<<"so phan tu: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"nhap phan so thu "<<i<<endl;
		nhap(a[i]);
	}
}
void xuat(phanso n)
{
	cout<<n.tuso<<"/"<<n.mauso<<endl;
}
void xoamang(phanso a[],int &n,int k)
{
	for(int i=k;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
}
double Divide(phanso a)
{
	double c;
	c=(float)a.tuso/a.mauso;
	return c;		
}
void PSmax(phanso a[], int n)
{
	double max=(double)a[0].tuso/a[0].mauso;
	int vt;
	for(int i=0;i<n;i++)
		if((double)a[i].tuso/a[i].mauso>max)
		{
			max=(double)a[i].tuso/a[i].mauso;
			vt=i;
		}
	cout<<"\nMax la: "<<max;
	cout<<"\nVi tri la: "<<vt;
}
phanso PScong(phanso a, phanso b)
{
	struct phanso tong;
	tong.tuso = a.tuso * b.mauso + a.mauso * b.tuso;
   	tong.mauso = a.mauso * b.mauso;
   	return tong;
}
void PStong(phanso a[100], int n)
{
	struct phanso tong=a[0];
	for(int i=1;i<n;i++)
	{
		tong=PScong(tong,a[i]);
	}
	cout<<"\nTong: "<<tong.tuso<<"/"<<tong.mauso;
}
void TimTongMax(phanso a[100],int n)
{
	int vt1,vt2;
	phanso Max=a[0];
	phanso s;
	for(int i=0;i<n;i++)
	{
		//s=(float)a[i].tuso/a[i].mauso + (float)a[i+1].tuso/a[i+1].mauso;
		s=PScong(a[i],a[i+1]);
		if(Divide(s)<Divide(Max))
		{
			Max=s;
			vt1=i;
			vt2=i+1;	
		}	
	}
	cout<<"\nTong lon nhat cua 2 phan so la:";
	//cout<<xuat(Max);
	cout<<"\nPhan so o vi tri:"<<vt1;
	cout<<"\nPhan so o vi tri:"<<vt2;

}

void xoamangmauchan(phanso a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].mauso%2==0)
		{
			xoamang(a,n,i);
			i--;
		}
	}
	xuat(a,n);
}
void tangdan(phanso a[100],int &n)
{
	int i,j;
	phanso s;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(Divide(a[j])<Divide(a[j-1]))
			{
				s=a[j];
				a[j]=a[j-1];
				a[j-1]=s;
			}
		}
	}
	xuat(a,n);
}
void Tong2Max(phanso a[100], int &n)
{
	phanso max, max2;
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
	//PScong(max,max2);
	xuat(PScong(max,max2));
}
int main()
{
	struct phanso a[100];
	int n;
	mangps(a,n);
//	xuat(a,n);
//	PSmax(a,n);
//	PStong(a,n);
	Tong2Max(a,n);
}
