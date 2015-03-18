#include<iostream>
using namespace std;

int main(){

    int n,a;
    cin>>n;
    int wynik;

    if(n==0) wynik=1;
    if(n==1) wynik=2;
    else{
    a=(n-2)%4;
    switch (a){
        case 0:
            wynik=4;
            break;
        case 1:
            wynik=8;
            break;
        case 2:
            wynik=6;
            break;
        case 3:
            wynik=2;
            break;
    }
    }
    cout<<wynik;

}
