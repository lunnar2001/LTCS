
-+
#include<iostream>
using namespace std;
//Nhap mang
void NhapMang(int a[100], int &n)
{
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<<i<<" : ";
		cin>>a[i];
	}
}
//Xuat mang
void XuatMang(int a[100], int n)
{
	for(int i=0;i<n;i++) cout<<a[i]<<"\t";
}
//Xuat mang voi gia tri chan
void XuatMangChan(int a[100], int n)
{
	for(int i=0;i<n;i++) if(a[i]%2==0) cout<<a[i]<<"\t";
}
//Xac dinh so nguyen to (true/false)
bool snt(int n)
{
	if (n<=1) return false;
	for (int i=2;i<n;i++)
		if (n%i==0)	return false;
	return true;
}
//Kiem tra mang co so nguyen to hay khong
void testSNT(int a[100], int n)
{
	for(int i=0;i<n;i++) 
		if(snt(a[i])==true)
		{
			cout<<"Mang co so nguyen to";
			return;
		}
}
//Kiem tra mang xem co toan bo chua so nguyen to hay khong
void testSNT2(int a[100], int n)
{
	int dem=0;
	for(int i=0;i<n;i++) if(snt(a[i])==true) dem++;
	if (dem==n) cout<<"toan bo la so nguyen to";
	else cout<<"khong hoan toan chua so nguyen to"; 
}
//dem so le
int demle(int a[100], int n)
{
	int tong=0;
	for(int i=0;i<n;i++) if(a[i]%2!=0) tong++;  
	return tong;
}
//Tinh tong gia tri trong mang
int tong(int a[100], int n)
{
	int s=0;
	for(int i=0;i<n;i++) s=s+a[i];
	return s;
}
//Tinh tong gia tri chan trong mang
int tongchan(int a[100], int n)
{
	int s=0;
	for(int i=0;i<n;i++) if(a[i]%2!=0) s=s+a[i];
	return s;
}
//Tinh tong gia tri chia het cho 3 trong mang
int tong3(int a[100], int n)
{
	int tong=0;
	for(int i=0;i<n;i++) if(a[i]%3!=0) tong=tong+a[i];
	return tong;
}
//Tinh trung binh cong cac so nguyen to
double tbcnt(int a[100], int n)
{
	int p=0,dem=0;
	for(int i=0;i<n;i++)
		if(snt(a[i])==true)
		{		
			p=p+a[i];
			dem++;
		}
	return (double)p/dem;
}
//Tinh tong so nguyen to 
int tongnt(int a[100], int n)
{
	int p=0;
	for(int i=0;i<n;i++) 
		if(snt(a[i])==true)	
			p=p+a[i];
	return p;
}
//Tim min
int min(int a[100], int n)
{
	int min=a[0];
	for(int i=0;i<n;i++) if (min>a[i]) min=a[i];
	return min;
}
//Tim max
int max(int a[100], int n)
{
	int max=a[0];
	for(int i=0;i<n;i++) if (max<a[i]) max=a[i];
	return max;
}
//Tong min max
int tongminmax(int a[100], int n)
{
	int min=a[0];
	for(int i=0;i<n;i++) if (min>a[i]) min=a[i];
	int max=a[0];
	for(int i=0;i<n;i++) if (max<a[i]) max=a[i];
	//int tong=0;
	return min+max;
}
//Kiem tra mang co tang dan hay khong
void testtg(int a[100], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)	if (a[i]<a[i+1]) dem++;
	if (dem==(n-1)) cout<<"Ham tang dan";
}
//Tinh tong cua max va can max
void max2(int a[100], int n)
{
    int max, max2;
    if (a[0] > a[1]){
        max = a[0];
        max2 = a[1];
    }else{
        max = a[1];
        max2 = a[0];
    }
    for(int i = 2; i < n; i++){
        if(max<a[i]){
            max2 = max;
            max = a[i];
        } else if (max2<a[i])
        	max2=a[i];
    }
//	for(int i=0;i<n;i++) if (max2<a[i]) max2=a[i];
//	cout<<max<<"\t"<<max2<<endl;
	cout<<max+max2;
}
//Kiem tra tinh doi xung
void doixung(int a[100], int n)
{
	int s,dem=0;
	if (n==1){
	cout<<"khong the doi xung";
	return;
	}
	for(int i=0;i<n;i++)
	{
		//cout<<a[i]<<"\t"<<a[n-1-i]<<endl;
		if (a[i]==a[n-1-i]) dem++;
	}
	if(dem==n) cout<<"doi xung";
	else cout<<"deo doi xung";
}
//Dao nguoc mang
void daonguoc(int a[100], int n)
{
	int t,s;
	for(int i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	XuatMang(a,n);
}
//Tang dan
void tangdan(int a[100], int n)
{
	int s=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				s = a[i];
				a[i] = a[j];
				a[j] = s;
			}   
	XuatMang(a,n);		
}
//xoa gia tri o vi tri duoc chon
void xoa(int a[100],int n)
{
	int vtxoa;
	XuatMang(a,n);
	cout<<"\nNhap vi tri can xoa: ";
	cin>>vtxoa;
	for(int i=vtxoa-1;i<n;i++)
		a[i]=a[i+1];
	n--;
	XuatMang(a,n);
}
//xoa tat ca gia tri am khoi mang
void xoagtam(int a[100],int n)
{
	for(int i=0;i<n;i++)
		if (a[i]<0)
		{	
			a[i]=a[i+1];
			n--;
		}
	XuatMang(a,n);
}
//xoa gia tri x trong mang
void xoax(int a[100],int n)
{
	int x;
	cout<<"\nNhap gia tri can xoa: ";
	cin>>x;
	for(int i=0;i<n;i++)
		if (a[i]==x)
		{	
			a[i]=a[i+1];
			n--;
		}
	XuatMang(a,n);
}
//xoa cac gia tri trung nhau
void xoaa(int a[100],int n)
{
	int s;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if (a[i]==a[j])
			{	
				a[j]=0;
			}
		//n--;
	
	XuatMang(a,n);
}
//chen x vao mang
void chen(int a[100],int n)
{
	int vtchen, x;
	XuatMang(a,n);
	cout<<"\nNhap vi tri can chen: ";
	cin>>vtchen;
	cout<<"\nNhap gia tri can chen: ";
	cin>>x;
	n++;
	for(int i=n-1;i>=vtchen;i--)
		a[i]=a[i-1];
	a[vtchen]=x;
	XuatMang(a,n);
}
//chan truoc le sau
void chanle(int a[], int n)
{
	int s,flag=0;
	for(int i=1;i<n;i++)
//		for(int j=i+1;j<n;j++)
		if(a[i]%2==0)
		{
			s = a[i];
			a[i] = a[flag ]; 
			a[flag] = s;
			flag++;
		}
	XuatMang(a,n);		
}
//chan chia 3 nam dau day, le chia 3 nam cuoi day, 0 chia het cho 3 nam giua
void chia3(int a[], int n)
{
	int s,flag=0, flag1=n;
	for(int i=0;i<n;i++)
		{
			if(a[i]%3==0 && a[i]%2==0)
			{
				s = a[i];
				a[i] = a[flag];
				a[flag] = s;
				flag++;
			}
//			if(a[i]%3==0 && a[i]%2!=0)
//			{
//				s = a[i];
//				a[i] = a[flag1];
//				a[flag1] = s;
//				flag1--;
//			}
			if(a[i]%3!=0)
			{
				s = a[i];
				a[i] = a[flag1];
				a[flag] = s;
				flag1--;
			}
		}
	XuatMang(a,n);		
}
//
void chentg(int a[100],int n)
{
	int vtchen, x;
	XuatMang(a,n);

	cout<<"\nNhap gia tri can chen: ";
	cin>>x;
	for(int i=n;i>=0;i--)
	{
		if (a[i-1]<=x<=a[i])
			a[i]=a[i-1];
			a[i]=x;
	}
	n++;
	chen(a,n);
}
int main()
{
	int a[100],n;
	NhapMang(a,n);
//Khai bao gia tri o day
	chanle(a,n);
}
