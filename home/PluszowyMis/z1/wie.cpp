#include<iostream>

using namespace std;

int main(){
	int year, a, b, c,d,e,f,g,h,i,k,j,l,m,p;
	cin >> year;
	
	if(year >= 1800 && year < 2200){
		a = year % 19;
		b = year / 100;
		c = year%100;
		d = b / 4;
		e = b%4;
	 	f = (b+8)/25;
	 	g = (b-f+1)/3;
	 	h = (19*a + b - d - g + 15)%30;
	 	i = c/4;
	 	k = c%4;
	 	l = (32+2*e+2*i-h-k)%7;
	 	m = (a+11*h+22*l)/451;
	 	p = (h+l-7*m+114)%31;
	 	
	 	cout << p+1 << " " << (h+l-7*m+114)/31;
 	}
 	
 	
	
}
