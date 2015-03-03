#include <iostream>
 using namespace std;

int main()
{

int r;
int A, B, a, b, c, d, e, liczba;
cin>>r;

	if((r>=1800)&&(r<=1899))
	{
		A=23;
		B=4;
	}
	else
	{
		if((r>=1900)&&(r<=2099))
		{
		A=24;
		B=5;
		}
		else
		{
		A=24;
		B=6;
		}
	}


a=r%19;
b=r%4;
c=r%7;
d=(a*19+A)%30;
e=((2*b)+(4*c)+(6*d)+B)%7;

if((d==29)&&(e==6))
	cout<<19<<" "<<4<<endl;
else
{

	if ((d==28)&&(e==6)&&(a>10))
	cout<<18<<" "<<4<<endl;
	else
	{
		if(d+e<10)
		cout<<d+e+22<<" "<<3<<endl;
		else cout<<d+e-9<<" "<<4<<endl;
	}
}


}
