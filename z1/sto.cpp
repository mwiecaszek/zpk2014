#include <iostream>
using namespace std;

int main(){

int A, B, K;
cin>>A>>B>>K;
int liczba =0;

int pierwszy_bok=A/K;
int drugi_bok=B/K;

if(pierwszy_bok<1 && drugi_bok<1){
    liczba=0;
}


if(pierwszy_bok>2 && drugi_bok>2){

    liczba = pierwszy_bok*drugi_bok; //ile by sie zmiescilo krzesel na calej powierzchni
    liczba = liczba - (pierwszy_bok-2)*(drugi_bok-2);
}

else{
    liczba = pierwszy_bok*drugi_bok;
}
cout<<liczba;


}
