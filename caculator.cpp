#include<iostream>
#include<math.h>
using namespace std;

void caculator(int a, int b, char kitu)
{
	switch(kitu)
	{
	case '+': cout<<a+b;break;
	case '-': cout<<a-b;break;
	case '*': cout<<a*b;break;
	case '/': cout<<a/b;break;
	case '^': cout<<pow(a,b);break;
	default: cout<<"concac";
	}
}
int main()
{
	caculator(4,3,'a');
}
