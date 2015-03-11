#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;
    int p, o;
    p=-1;
    o=-1;
    int a;
    for (int i=0; i<n; i++){
        cin>>a;
        if(p==-1 && a==x){
            p=1+i;}
        if(a==x){
            o=1+i;}}
cout<<p<<" "<<o<<endl;}
