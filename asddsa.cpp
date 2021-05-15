#include<iostream>
#include<string.h>
using namespace std;
// dem xem trong chuoi co bao nhieu ki tu
void demkitu( char s[])
{
	int x=0;
    while(s[x]!='\0')
    {
    	x++;
    }
   	cout<<x;
}
// dem xem trong chuoi co bao nhieu tu
int demsotu(char s[])
{
	int n=strlen(s),i;
	int dem=0;
	if(s[0]!=' ')
		dem=1;
	for( i=0;i<n-1;i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			dem++;
	}
	return dem;
}
//dem xem co bao nhieu khoang trang trong chuoi
void DemKhoangTrang(char s[])
{
	int i,dem=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			dem++;
		}
	}
	cout<<dem;
}
// loai bo nhung khoang trang trong chuoi
void xoa(char s[],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0'; 
}
void xoakt(char s[])
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
	cout<<s;
}
// noichuoi
void noichuoi(char a[],char b[])
{
	strcat(a,b);
	puts(a);
}
// dua toan bo chuoi ve chu thuong 
void chuthuong(char s[])
{
	for(int i=0;i<strlen(s);i++)
		if(s[i]>=65&& s[i]<=90)
			s[i]=s[i]+32;
	puts(s);
}
// dua toan bo chuoi ve chu hoa
void chuhoa(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>=95 && s[i]<=122)
			s[i]=s[i]-32;
	}
	puts(s);
}
//daokitu
void daokitu(char s[])
{
	for(int i=0;i<=strlen(s)/2;i++)
	{
		int dem=s[i];
   		s[i]=s[strlen(s)-1-i];
   		s[strlen(s)-1-i]=dem;
  	}
  	puts(s);
}
// kiem tra chuoi co doi xung khong
bool doixung(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!=s[strlen(s)-i-1])
			return false;
	}
	return true;
}
// kiem tra tu  co trong mang khong
void timtutrongchuoi( char s[], char s1)
{
	int dem=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==s1)
			dem++;
	}
	if(dem!=0)
		cout<<"tu  co trong chuoi";
	else
		cout<<"tu khong co";
}
// nhap vao 1 ki tu xem trong chuoi co ki tu do khong roi xoa ki tu
void xoakitu(char a[], char b)
{
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]==b)
		for(int j=0;j<n;j++)
			a[j]=a[j+1];
		i--;
		n--;
	}
	cout<<a;
}
// doi tu nguyen thi bao trang --> trang nguyen thi bao 
char chuyendoi(char s[50])
{
    int i = 0, n;
    char tam[10], ten[50];
   
    n = strlen(s) - 1;
    while (s[n] != ' ')
    {
        tam[i++] = s[n];
        n--;
    }
    tam[i++] = '\0';
    s[n] = '\0';
 
    strcpy(ten, strrev(tam));
    strcat(ten, " ");
    strcat(ten, s);
    strcpy(s, ten);
    puts(s);
}
// dao tu
void daotu(char s[])
{
	char c[255];
	c[0]='\0';
	int n=strlen(s);
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			strcat(strcat(c,s+i+1)," ");
			s[i]='\0';	
		}
	}
	strcat(c,s);
	puts(c);
}
int main()
{
	char s[200];
	char b[200];
	cout<<"nhap chuoi s: ";
	gets(s);
	/*cout<<"nhap ki tu b: ";
	gets(b);*/
	/*cout<<"nhap chuoi b: ";
	gets(b);
	noichuoi(a,b);*/
	//chuthuong(a);
	//chuhoa(s);
	/*int kq=demsotu(s);
	cout<<kq;*/
	//demkitu(s);
	/*DemKhoangTrang(s);*/
	//xoakt(s);
	//daokitu(s);
	/*if(doixung(s)==true)
		cout<<"mang doi xung";
	else
		cout<<"mang khong doi xung";*/
	//timtutrongchuoi(s,'s1');
	//xoakitu(a,'b');
	chuyendoi(s);
	//daotu(s);
}
