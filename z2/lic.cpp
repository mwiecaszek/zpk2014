#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int pierwiastek=0;
int pierwsza=0;


for(int i=2;i<n;i++){
    if (n%i==0) {
        pierwsza=1;
    }
    else continue;
}
if(pierwsza==0) cout<<"pierwsza";
if(pierwsza==1) cout<<"zlozona";
}
