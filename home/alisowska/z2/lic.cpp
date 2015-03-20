#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;
int x=0;
int i=2;
while (i<=sqrt(n) && x==0){
    if (n%i==0){
        x=1;}
    i++;}
if(x==0)
    cout<<"pierwsza";
if(x==1)
    cout<<"zlozona";
}
