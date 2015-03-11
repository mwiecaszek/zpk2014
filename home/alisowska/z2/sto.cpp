#include <iostream>
using namespace std;
int main(){
int a, b, k, l;
cin>>a>>b>>k;
l=0;
a=a/k;
b=b/k;

if(a<1 && b<1){
    l=0;}
if(a>2 && b>2){
    l = a*b;
    l -=(a-2)*(b-2);}
else{
    l = a*b;}
cout<<l;
}
