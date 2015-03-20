#include <iostream>
#include <cmath>
using namespace std;

int main(){
int n;
cin>>n;
int d=1;
bool c=0;
for(int i=2;i<n;i++){
    if(n%i==0) d=n/i;
    else c=0;
    if(i>=sqrt(n) && c==0 && d==1) c=0;
    else
    if(d<=sqrt(n)) c=1;

}
if(c) cout<<"zlozona";
else cout<<"pierwsza";


}



