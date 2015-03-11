#include <iostream>
using namespace std;

int main(){
int a,b,suma=0; //a liczba dni, b szukana wartosc
cin>>a>>b;
int tablica[a];
int pozycja[a];

for(int i=0; i<a; i++)
    cin>>tablica[i];

for(int i=0; i<a; i++){
    if(tablica[i]==b)                 //sprawdzam czy wystepuje wartosc b
        pozycja[i]=1;
        else
            pozycja[i]=0;                  //jesli wystepuje przypisuje wartosc 1
    suma=suma+pozycja[i];      //zliczam wystepowanie tej wartosci
}

if(suma==0) cout<<"-1"<<" "<<"-1"; //gdy nie wystepuje b
else
    if(suma==1){                    //gdy wystepuje raz b
        for(int i=0; i<a; i++){
                if(pozycja[i]==1)
                    cout<<i+1<<" "<<i+1;
                                }
                }
else
    if(suma==2){                    //gdy dwa razy
         for(int i=0; i<a; i++){
                if(pozycja[i]==1)
                    cout<<i+1<<" ";
                                }
                }
else
    if(suma>2){                     //gdy b wystepuje wiecej niz dwa razy
        int c=0;                    //zmienna c do zliczania ilosci wystapien b
        for(int i=0; i<a; i++){
                if(c==0){
                    if(pozycja[i]==1){
                        cout<<i+1<<" ";
                        c++;

                                     }
                        }
                else
                for(int j=a; j>i; j--){
                        if(pozycja[j]==1){
                            cout<<j+1;
                            i=a;
                            j=i;
                        }

                }


                    }
                    }
}
