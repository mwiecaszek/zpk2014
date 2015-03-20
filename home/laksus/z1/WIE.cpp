#include<iostream>
#include<cmath>

using namespace std;

int rok,a,b,c,d,e,f,g,h,i,k,l,m,p;

int main(){

    cin >> rok;
    a = rok%19;
    b = floor(rok/100);
    c = rok%100;
    d = floor(b/4);
    e = b%4;
    f = floor((b+8)/25);
    g = floor((b-f+1)/3);
    h = (19*a+b-d-g+15)%30;
    i = floor(c/4);
    k = c%4;
    l = (32+2*e+2*i-h-k)%7;
    m = floor((a+11*h+22*l)/451);
    p = (h+l-7*m+114)%31;

    cout << p+1 << " " << floor((h+l-7*m+114)/31) << endl;
}
