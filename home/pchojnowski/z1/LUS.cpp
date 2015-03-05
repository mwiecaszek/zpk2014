#include <iostream>
using namespace std;

int main(){

int n,bufor=0,bufor2=0,b=0,e=10;
cin>>n;


if(n%e==0){

    e*=10;

}
n=n/e;





while(n>=1){

    bufor=n%10;

    n=n/10;

    if(bufor!=0||bufor2!=0)
cout<<bufor;
bufor2=bufor;

}


}
