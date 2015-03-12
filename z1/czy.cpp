#include <iostream>
using namespace std;

int main(){

int i=0;
int j=2;
int t = 1;
cin>>i;

while(i>1){
    while(i%j==0)
    {
        if(j%2!=0) t=0;
        i=i/j;
    }
    j++;
}

if (t==1) cout<<"TAK";
else cout<<"NIE";
}
