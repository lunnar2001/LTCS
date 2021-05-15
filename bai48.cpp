#include<iostream>
using namespace std;

int main()
{
	/*int a,b,c,e,f,g,h;
	int x=1000;
	while(x<=9999)
	{
		e=x/1000;
		f=(x%1000)/100;
		g=(x%100)/10;
		h=x%10;
		x=x+1;
		int asd=100;
		for (int i=100;i<=999;i=i+1)
		{
			asd=asd+1;
			a=i/100;
			b=(i%100)/10;
			c=i%10;
			if(asd*8==x && a==e && c==g)
			{
					cout<<a<<b<<c<<"	"<<e<<f<<g<<h<<endl;
			}
		}
	}*/
	for(int a=1;a<=9;a++)
		for (int b=0;b<=9;b++)
			for (int c=0;c<=9;c++)
				for (int d=0;d<=9;d++)
					for (int e=0;e<=9;e++)
					{
						if((a*100+b*10+c)*8==(a*1000+d*100+c*10+e))
						cout<<a<<b<<c<<"	"<<a<<d<<c<<e<<endl;
					}
}

