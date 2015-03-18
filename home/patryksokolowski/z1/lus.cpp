#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double ceil(double fValue);

int main(){
int liczba;
int i=1;
int wynik=0;
cin >> liczba;
int k = liczba;
while(k/10!=0){
    i++;
    k=k/10;
}
while (i>=0){
    if(liczba%10!=0){
        int x=liczba%10;
        wynik=ceil(x*pow(10, i-1)+wynik);
        liczba=liczba/10;
}
    else{
        liczba=liczba/10;
    }
    i--;
}
cout << wynik;
}



