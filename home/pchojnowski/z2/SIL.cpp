#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int t[n];
t[0]=1;
t[1]=1;
t[2]=2;
for(int i=3;i<n+1;i++){

    t[i]=i*t[i-1];

}
cout<<t[n];


}
