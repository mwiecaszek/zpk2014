#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

double ceil(double fValue);

int main(){

int number;

int i=1; //liczba cyfr w liczbie
int wynik=0; //koncowy wynik ppo odwroceniu

cin>>number;
int k=number;

while(k/10!=0){
    i++;
    k=k/10;
}

while (i>=0){
    if(number%10!=0){
        int jednosc=number%10;
        wynik=ceil(jednosc*pow(10, i-1)+wynik);
        number=number/10;


}
    else{
        number=number/10;

    }
    i--;
}
cout<<wynik;
}



