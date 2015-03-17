#include<iostream>
using namespace std;

int main(){

string a;
cin>>a;
int len=a.length();
int t=1;

for(int i=0;i<len/2;i++){
    if (a[i]!=a[len-1-i]) t=0;

}
if (t==1) cout<<"TAK";
else cout<<"NIE";
}
