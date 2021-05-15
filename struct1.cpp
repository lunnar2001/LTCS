
#include<iostream>
#include<math.h>
struct dmhuy
{
	int sothuc,soao;
};
void nhapdmhuy(dmhuy &n)
{
	//char x;
	std::cout<<"Nhap phan thuc: ";
	std::cin>>n.sothuc;
	std::cout<<"Nhap phan ao: ";
	std::cin>>n.soao;
}
int xeti(int i)
{
	if (i%2==0)
		i = 1;
	else i = -1;
	return i;
}
void tinhdmhuy(dmhuy n, dmhuy n1, int i, char x)
{
	switch(x)
	{
		case '+': std::cout<<(n.sothuc+n1.sothuc)+xeti(i)*(n.soao+n1.soao);break;
		case '-': std::cout<<(n.sothuc+n1.sothuc)-xeti(i)*(n.soao+n1.soao);break;
		case '*': std::cout<<((n.sothuc*n1.sothuc)+(n.soao*n1.soao))+xeti(i)*((n.sothuc*n1.soao)+(n.soao*n1.sothuc));break;
		case '/': std::cout<<
 		default: std::cout<<"sai";
	}
}
/*void xuatdmhuy(dmhuy n, int i)
{
	
}*/
int main()
{
	struct dmhuy n,n1;
	int i;
	char x;
	do{
		std::cout<<"Nhap mu i: ";
		std::cin>>i;
	//delay(10);
	}while(i<1);
	std::cout<<"Nhap phep tinh: ";
	std::cin>>x;
	nhapdmhuy(n);
	nhapdmhuy(n1);
	tinhdmhuy(n,n1,i,x);
	//xuatdmhuy(n,i);
	
}
