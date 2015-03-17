#include <iostream>
using namespace std;

int main(){

int a,b,k;
cin >> a >> b >> k;
int p=0;
int d=0;
int wynik=0;
if(b>a){
    if (a%k==0) p=a/k;
    else p= (a/k+1);
    d=b/k;
    wynik=d-p+1;

}
if (b==a && b%k==0) wynik=1;
cout << wynik;
}
