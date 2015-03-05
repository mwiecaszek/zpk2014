#include <iostream>
using namespace std;

int main(){

int n,bufor=0,b=0,e=10;
cin>>n;
b=n;
if(n%10!=0)e=1;
else
while(b%e==0){
    b=b/10;
    e*=10;
}





while(n>=1){

    bufor=n%10;

    n=n/10;


cout<<bufor;


}


}
