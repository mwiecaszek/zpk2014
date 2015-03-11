#include <iostream>
using namespace std;


int main(){

    int a, b, k, wynik;
    cin >> a >> b >> k;
    wynik=0;

    if (a!=b){
        if(a%k==0)
            wynik++;
        a=a+k-a%k;
        if(a<=b){
            wynik++;
            b-=b%k;
            wynik+=(b-a)/k;
        }
        else{
            ;
        }

    }
    else{
        if(a%k==0)
            wynik=1;
        else
            ;
    }
    cout << wynik;
}
