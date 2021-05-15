#include<iostream>
#include<string.h>
#include<math.h>
struct diem{
	double x,y;
};

void nhap(diem &n) //nhap diem 
{
	//quen de roi de xem sach da :)
	std::cout<<"Nhap x (truc hoanh): ";
	std::cin>>n.x;
	std::cout<<"Nhap y (truc tung): ";
	std::cin>>n.y;
}
double khoangcach(diem a, diem b) //thu nay tinh khoang cach
{
	double kc;
	kc=sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
	return kc;
}
bool check(diem a, diem b, diem c) //kiem tra xem co diem nao trung nhau khong
{
	if ((a.x == b.x && a.y == b.y ) || (b.x == c.x && b.y == c.y) || (a.x == c.x && a.y == c.y)) return true;
	else return false;
}
double dientich(diem a, diem b, diem c) //Tinh dien tich
{
	if (check(a,b,c) == true ) 
	{
		std::cout << "A, B, C co the trung nhau nen khong tao thanh 1 tam giac!";
		return 0;
	}
	double s,p, AB,BC,AC;
	AB=khoangcach(a,b);
	BC=khoangcach(b,c);
	AC=khoangcach(a,c);
	p=(AB+BC+AC)/2;
	s=sqrt(p*(p-AB)*(p-AC)*(p-BC));
	return s;
}
void xacdinhD(diem a, diem b, diem c, diem d)
{
	if (dientich(a,b,c) == dientich(a,b,d)+dientich(a,c,d)+dientich(b,d,c))
		std::cout<<"D thuoc tam giac ABC";
	else
		std::cout<<"D khong thuoc tam giac ABC";
}
void xuat(diem a, diem b, diem c) //xuat du lieu
{
	//std::cout<<"Toa do x y la: ("<<n.x<<","<<n.y<<")"<<endl;
	std::cout<<dientich(a,b,c);
}

int main()
{
	struct diem a, b, c, d; 
	nhap(a); //nhap diem 1
	nhap(b); //nhap diem 2
	nhap(c); //nhap diem 3
	nhap(d); //4
	//khoangcach(a,b);
	dientich(a,b,c); //tinh S
	xacdinhD(a,b,c,d); //xac dinh D co thuoc tam giac abc hay k
	//xuat(a,b,c); //luoilamqua :) 
}
