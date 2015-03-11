#include<iostream>
#include<math.h>
using namespace std;
int main(){
string x;
int w=0;
cin>>x;
int d=x.length();
int i=0;
while (i<d/2 && w==0)
    {if(x[i] != x[d-i-1]){
        w=1;}
    i++;}
    if (w==0)
        cout<<"TAK"<<endl;
    else
        cout<<"NIE"<<endl;
}
