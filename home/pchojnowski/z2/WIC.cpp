#include <iostream>
using namespace std;

int mak(int a, int b){
if(a>b) return a;
else if(b>a) return b;
else if(b==a) return a;
}


int main(){
int n;
cin>>n;
int t[n], t2[n];
int maks=0;

for(int i=0; i<n; i++){
    cin>>t[i];
    t2[i]=t[i];
}

for(int i=0; i<n-1; i++)
    maks=t[i+1]=mak(t[i],t[i+1]);

for(int i=0; i<n; i++)
    if(t2[i] == maks) t2[i]=0;

for(int i=0; i<n-1; i++){
    t2[i+1]=mak(t2[i],t2[i+1]);
    maks=t2[i+1];}

cout<<maks;


}
